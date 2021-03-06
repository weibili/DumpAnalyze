#pragma once
#include <atlstr.h>
#include <string>
#include <vector>
#include "lib/zlib/unzip.h"
#include <list>

namespace Util
{
	namespace File 
	{
		BOOL DeleteDirectoryEx(LPCWSTR szFolder);
		BOOL DeleteFileReadOnly(CString& strFile);
		CString GetTmpRenameFile(CString strFile);
		BOOL UnzipFile(std::string& zipPath,std::string& folder);
		BOOL ExtractCurrentFile(unzFile z, LPCSTR strOutFileName, unz_file_info& file_info);
		BOOL GetFileList(std::string& strZipFile, vector<std::string>& vecFile, BOOL bGetAll);
	}

	namespace Process
	{
		CStringA CreateProcessForOutput(LPCSTR lpFilePath, LPCSTR lpParameters, int nTimeOut = 10 * 60 * 1000);			//启动进程，获取输出结果，一般是命令行程序使用；
	}

	namespace STRING
	{
		std::list<CStringA> spliterString(CStringA src, CStringA spliter);
	}
}