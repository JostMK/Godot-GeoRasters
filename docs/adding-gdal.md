# Adding GDAL

## Adding git submodule

Command: `git submodule add <repo_url> <destination_folder>`

For GDAL: 
- Add submodule: `git submodule add https://github.com/OSGeo/gdal extern/gdal`
- Checkout version v3.10.2: `cd extern/gdal && git checkout tags/v3.10.2`

### Windows activate 'Long Paths'

Enable long paths in windows ([see](https://learn.microsoft.com/en-us/windows/win32/fileio/maximum-file-path-limitation?tabs=powershell)): 
```powershell
New-ItemProperty -Path "HKLM:\SYSTEM\CurrentControlSet\Control\FileSystem" -Name "LongPathsEnabled" -Value 1 -PropertyType DWORD -Force
```

Tell git to use long paths ([see](https://stackoverflow.com/questions/22575662/filename-too-long-in-git-for-windows)):
```shell
git config --global core.longpaths true
```
