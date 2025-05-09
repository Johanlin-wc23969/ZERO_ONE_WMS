#pragma once
#ifndef _STORE_DAO_
#define _STORE_DAO_
#include "BaseDAO.h"
#include "../../domain/do/WvDO.h"
#include "../../domain/query/cangweitu/HuoQuCangWeiShuJuQuery.h"

/**
 * 示例表数据库操作实现
 */
class StoreDAO : public BaseDAO
{
private:
	//************************************
	// Method:      queryConditionBuilder
	// FullName:    SampleDAO::queryConditionBuilder
	// Access:      private 
	// Returns:     std::string 返回条件SQL语句，即WHERE部分的语句
	// Parameter:   const SampleQuery::Wrapper& query 查询数据对象
	// Parameter:   SqlParams& params 存放查询数据的参数对象
	// Description: 查询条件构建器，根据SampleQuery对象动态构建查询条件相关参数
	//************************************
	inline std::string queryConditionBuilder(const HuoQuCangWeiShuJuQuery::Wrapper& query, SqlParams& params);
public:
	// 分页查询数据
	std::list<WvDO> selectWithPage(const HuoQuCangWeiShuJuQuery::Wrapper& query);
	
};
#endif // !_STORE_DAO_