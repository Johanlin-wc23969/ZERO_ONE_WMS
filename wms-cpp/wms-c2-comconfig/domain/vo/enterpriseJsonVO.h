#pragma once
/*
Copyright Zero One Star.All rights reserved.

@Author: z
@Date : 2025/2/22 10 : 01

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

https ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef _ADD_ENTERPRISE_JSON_VO_
#define _ADD_ENTERPRISE_JSON_VO_
#include "../lib-oatpp/include/domain/vo/JsonVO.h"
#include "../dto/enterpriseDTO.h"
#include "../GlobalInclude.h"
using namespace oatpp;
#include OATPP_CODEGEN_BEGIN(DTO)

//录入企业分类信息JsonVO
class addEnterpriseJsonVO : public JsonVO<UInt64>
{
	DTO_INIT(addEnterpriseJsonVO, JsonVO<UInt64>);
};
//分页查询JsonVO
class enterprisePageJsonVO : public JsonVO<enterprisePageDTO::Wrapper>
{
	DTO_INIT(enterprisePageJsonVO, JsonVO<enterprisePageDTO::Wrapper>);
};
//获取企业分类名称列表
class enterpriseNameJsonVO : public JsonVO<enterpriseNameDTO::Wrapper>
{
	DTO_INIT(enterpriseNameJsonVO, JsonVO<enterpriseNameDTO::Wrapper>);
};
#include OATPP_CODEGEN_END(DTO)

#endif