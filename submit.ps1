param([string]$Message = "")

# 让传参和输出都走 UTF-8，否则中文提交说明会乱码
[Console]::OutputEncoding = New-Object System.Text.UTF8Encoding $false
$OutputEncoding = New-Object System.Text.UTF8Encoding $false

$repo = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $repo

Write-Host ""
Write-Host "============================================" -ForegroundColor Cyan
Write-Host "        提交作业到 GitHub" -ForegroundColor Cyan
Write-Host "============================================" -ForegroundColor Cyan
Write-Host ""

if (-not (Test-Path (Join-Path $repo ".git"))) {
    Write-Host "[错误] 这个文件夹不是 git 仓库。" -ForegroundColor Red
    exit 1
}

$changes = git status --porcelain
if (-not $changes) {
    Write-Host "没有检测到新的改动。" -ForegroundColor Yellow
    Write-Host ""
    Write-Host "正在确认云端是否已同步..." -ForegroundColor Gray
    $out = git push 2>&1
    $out | ForEach-Object { Write-Host "  $_" }
    Write-Host ""
    Write-Host "已是最新状态，无需操作。" -ForegroundColor Green
    exit 0
}

Write-Host "本次改动的文件：" -ForegroundColor Gray
$changes | ForEach-Object { Write-Host "  $_" }
Write-Host ""

if (-not $Message) {
    $Message = Read-Host "用一句话说明这次改了什么（直接回车 = 更新作业）"
}
if (-not $Message) { $Message = "更新作业" }

Write-Host ""
Write-Host "[1/3] 暂存所有改动..." -ForegroundColor Cyan
git add -A

Write-Host "[2/3] 记录存档点：$Message" -ForegroundColor Cyan
git commit -m $Message
if ($LASTEXITCODE -ne 0) {
    Write-Host ""
    Write-Host "[错误] 存档失败，把上面的提示发出来。" -ForegroundColor Red
    exit 1
}

Write-Host "[3/3] 上传到 GitHub..." -ForegroundColor Cyan
$pushOut = git push 2>&1
$pushOut | ForEach-Object { Write-Host "  $_" }
if ($LASTEXITCODE -ne 0) {
    Write-Host ""
    Write-Host "[错误] 上传失败，检查网络后重新运行一次。" -ForegroundColor Red
    exit 1
}

Write-Host ""
Write-Host "============================================" -ForegroundColor Green
Write-Host "        完成！作业已经上传" -ForegroundColor Green
Write-Host "  查看：https://github.com/lvjunda123/c-homework" -ForegroundColor Green
Write-Host "============================================" -ForegroundColor Green
Write-Host ""
exit 0
