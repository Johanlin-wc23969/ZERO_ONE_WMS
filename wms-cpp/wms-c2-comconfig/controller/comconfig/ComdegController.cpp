#include "stdafx.h"
#include "ComdegController.h"
#include "service/ba-com-deg/ComdegService.h"

ComdegPageJsonVO::Wrapper ComdegController::execcomdegAll(const ComdegQuery::Wrapper& query)
{
	// 定义一个Service
	ComdegService service;
	// 查询数据
	auto result = service.listAll(query);
	// 响应结果
	auto jvo = ComdegPageJsonVO::createShared();
	jvo->success(result);
	return jvo;   
}

Uint64JsonVO::Wrapper ComdegController::execAddComdeg(const ComdegAddDTO::Wrapper& dto, const PayloadDTO& payload)
{
	// 定义返回数据对象
		auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	// 非空校验
	if (!dto->degcode || !dto->degname || !dto->degdel)
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}
	// 有效值校验
	if (dto->degcode->empty() || dto->degname->empty() || dto->degdel->empty())
	{
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}

	// 定义一个Service
	ComdegService service;
	// 执行数据新增
	uint64_t id = service.saveData(dto,payload);
	if (id > 0) {
		jvo->success(UInt64(id));
	}
	else
	{
		jvo->fail(UInt64(id));
	}
	//响应结果
	return jvo;
}
