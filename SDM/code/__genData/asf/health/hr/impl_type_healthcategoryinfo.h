#ifndef __ASF_HEALTH_HR__HEALTHCATEGORYINFO_H__
#define __ASF_HEALTH_HR__HEALTHCATEGORYINFO_H__


#include "cstdint"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthCategoryInfo {
public:
	std::uint16_t CategoryMaxNrOfHazard;
	std::uint16_t CategoryCurNrOfHazard;
/*
	HealthCategoryInfo() {}
	~HealthCategoryInfo() {}
	HealthCategoryInfo(const std::uint16_t _CategoryMaxNrOfHazard,const std::uint16_t _CategoryCurNrOfHazard):CategoryMaxNrOfHazard(_CategoryMaxNrOfHazard),CategoryCurNrOfHazard(_CategoryCurNrOfHazard) {}
	HealthCategoryInfo(const HealthCategoryInfo &_x){
		CategoryMaxNrOfHazard = _x.CategoryMaxNrOfHazard;
		CategoryCurNrOfHazard = _x.CategoryCurNrOfHazard;
	}
	HealthCategoryInfo(HealthCategoryInfo &&_x){
		CategoryMaxNrOfHazard = std::move(_x.CategoryMaxNrOfHazard);
		CategoryCurNrOfHazard = std::move(_x.CategoryCurNrOfHazard);
	}
	HealthCategoryInfo& operator=(const HealthCategoryInfo &_x){
		CategoryMaxNrOfHazard = _x.CategoryMaxNrOfHazard;
		CategoryCurNrOfHazard = _x.CategoryCurNrOfHazard;
		return *this;
	}
	HealthCategoryInfo& operator=(HealthCategoryInfo &&_x){
		CategoryMaxNrOfHazard = std::move(_x.CategoryMaxNrOfHazard);
		CategoryCurNrOfHazard = std::move(_x.CategoryCurNrOfHazard);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CategoryMaxNrOfHazard);
		fun(CategoryCurNrOfHazard);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CategoryMaxNrOfHazard);
		fun(CategoryCurNrOfHazard);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CategoryMaxNrOfHazard);
		fun << (CategoryCurNrOfHazard);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CategoryMaxNrOfHazard);
		fun >> (CategoryCurNrOfHazard);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHCATEGORYINFO_H__
