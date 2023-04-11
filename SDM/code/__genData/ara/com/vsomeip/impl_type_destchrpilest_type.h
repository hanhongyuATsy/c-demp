#ifndef __ARA_COM_VSOMEIP__DESTCHRPILEST_TYPE_H__
#define __ARA_COM_VSOMEIP__DESTCHRPILEST_TYPE_H__







namespace ara
{
namespace com
{
namespace vsomeip
{

struct DestChrPileSt_Type {
public:
	bool NHR_DestChrgPileSt;
/*
	DestChrPileSt_Type() {}
	~DestChrPileSt_Type() {}
	DestChrPileSt_Type(const bool _NHR_DestChrgPileSt):NHR_DestChrgPileSt(_NHR_DestChrgPileSt) {}
	DestChrPileSt_Type(const DestChrPileSt_Type &_x){
		NHR_DestChrgPileSt = _x.NHR_DestChrgPileSt;
	}
	DestChrPileSt_Type(DestChrPileSt_Type &&_x){
		NHR_DestChrgPileSt = std::move(_x.NHR_DestChrgPileSt);
	}
	DestChrPileSt_Type& operator=(const DestChrPileSt_Type &_x){
		NHR_DestChrgPileSt = _x.NHR_DestChrgPileSt;
		return *this;
	}
	DestChrPileSt_Type& operator=(DestChrPileSt_Type &&_x){
		NHR_DestChrgPileSt = std::move(_x.NHR_DestChrgPileSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(NHR_DestChrgPileSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(NHR_DestChrgPileSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (NHR_DestChrgPileSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (NHR_DestChrgPileSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DESTCHRPILEST_TYPE_H__
