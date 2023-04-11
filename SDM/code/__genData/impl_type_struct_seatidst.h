#ifndef ____STRUCT_SEATIDST_H__
#define ____STRUCT_SEATIDST_H__








struct Struct_SeatIDSt {
public:
	bool Bool_SeatDriverStatus;
	bool Bool_SeatCodriverStatus;
	bool Bool_SeatRightmiddleStatus;
	bool Bool_SeatMidmiddleStatus;
	bool Bool_SeatLeftmiddleStatus;
	bool Bool_SeatLeftrearStatus;
	bool Bool_SeatRigntrearStatus;
	bool Bool_SeatMidrearStatus;
/*
	Struct_SeatIDSt() {}
	~Struct_SeatIDSt() {}
	Struct_SeatIDSt(const bool _Bool_SeatDriverStatus,const bool _Bool_SeatCodriverStatus,const bool _Bool_SeatRightmiddleStatus,const bool _Bool_SeatMidmiddleStatus,const bool _Bool_SeatLeftmiddleStatus,const bool _Bool_SeatLeftrearStatus,const bool _Bool_SeatRigntrearStatus,const bool _Bool_SeatMidrearStatus):Bool_SeatDriverStatus(_Bool_SeatDriverStatus),Bool_SeatCodriverStatus(_Bool_SeatCodriverStatus),Bool_SeatRightmiddleStatus(_Bool_SeatRightmiddleStatus),Bool_SeatMidmiddleStatus(_Bool_SeatMidmiddleStatus),Bool_SeatLeftmiddleStatus(_Bool_SeatLeftmiddleStatus),Bool_SeatLeftrearStatus(_Bool_SeatLeftrearStatus),Bool_SeatRigntrearStatus(_Bool_SeatRigntrearStatus),Bool_SeatMidrearStatus(_Bool_SeatMidrearStatus) {}
	Struct_SeatIDSt(const Struct_SeatIDSt &_x){
		Bool_SeatDriverStatus = _x.Bool_SeatDriverStatus;
		Bool_SeatCodriverStatus = _x.Bool_SeatCodriverStatus;
		Bool_SeatRightmiddleStatus = _x.Bool_SeatRightmiddleStatus;
		Bool_SeatMidmiddleStatus = _x.Bool_SeatMidmiddleStatus;
		Bool_SeatLeftmiddleStatus = _x.Bool_SeatLeftmiddleStatus;
		Bool_SeatLeftrearStatus = _x.Bool_SeatLeftrearStatus;
		Bool_SeatRigntrearStatus = _x.Bool_SeatRigntrearStatus;
		Bool_SeatMidrearStatus = _x.Bool_SeatMidrearStatus;
	}
	Struct_SeatIDSt(Struct_SeatIDSt &&_x){
		Bool_SeatDriverStatus = std::move(_x.Bool_SeatDriverStatus);
		Bool_SeatCodriverStatus = std::move(_x.Bool_SeatCodriverStatus);
		Bool_SeatRightmiddleStatus = std::move(_x.Bool_SeatRightmiddleStatus);
		Bool_SeatMidmiddleStatus = std::move(_x.Bool_SeatMidmiddleStatus);
		Bool_SeatLeftmiddleStatus = std::move(_x.Bool_SeatLeftmiddleStatus);
		Bool_SeatLeftrearStatus = std::move(_x.Bool_SeatLeftrearStatus);
		Bool_SeatRigntrearStatus = std::move(_x.Bool_SeatRigntrearStatus);
		Bool_SeatMidrearStatus = std::move(_x.Bool_SeatMidrearStatus);
	}
	Struct_SeatIDSt& operator=(const Struct_SeatIDSt &_x){
		Bool_SeatDriverStatus = _x.Bool_SeatDriverStatus;
		Bool_SeatCodriverStatus = _x.Bool_SeatCodriverStatus;
		Bool_SeatRightmiddleStatus = _x.Bool_SeatRightmiddleStatus;
		Bool_SeatMidmiddleStatus = _x.Bool_SeatMidmiddleStatus;
		Bool_SeatLeftmiddleStatus = _x.Bool_SeatLeftmiddleStatus;
		Bool_SeatLeftrearStatus = _x.Bool_SeatLeftrearStatus;
		Bool_SeatRigntrearStatus = _x.Bool_SeatRigntrearStatus;
		Bool_SeatMidrearStatus = _x.Bool_SeatMidrearStatus;
		return *this;
	}
	Struct_SeatIDSt& operator=(Struct_SeatIDSt &&_x){
		Bool_SeatDriverStatus = std::move(_x.Bool_SeatDriverStatus);
		Bool_SeatCodriverStatus = std::move(_x.Bool_SeatCodriverStatus);
		Bool_SeatRightmiddleStatus = std::move(_x.Bool_SeatRightmiddleStatus);
		Bool_SeatMidmiddleStatus = std::move(_x.Bool_SeatMidmiddleStatus);
		Bool_SeatLeftmiddleStatus = std::move(_x.Bool_SeatLeftmiddleStatus);
		Bool_SeatLeftrearStatus = std::move(_x.Bool_SeatLeftrearStatus);
		Bool_SeatRigntrearStatus = std::move(_x.Bool_SeatRigntrearStatus);
		Bool_SeatMidrearStatus = std::move(_x.Bool_SeatMidrearStatus);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Bool_SeatDriverStatus);
		fun(Bool_SeatCodriverStatus);
		fun(Bool_SeatRightmiddleStatus);
		fun(Bool_SeatMidmiddleStatus);
		fun(Bool_SeatLeftmiddleStatus);
		fun(Bool_SeatLeftrearStatus);
		fun(Bool_SeatRigntrearStatus);
		fun(Bool_SeatMidrearStatus);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Bool_SeatDriverStatus);
		fun(Bool_SeatCodriverStatus);
		fun(Bool_SeatRightmiddleStatus);
		fun(Bool_SeatMidmiddleStatus);
		fun(Bool_SeatLeftmiddleStatus);
		fun(Bool_SeatLeftrearStatus);
		fun(Bool_SeatRigntrearStatus);
		fun(Bool_SeatMidrearStatus);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Bool_SeatDriverStatus);
		fun << (Bool_SeatCodriverStatus);
		fun << (Bool_SeatRightmiddleStatus);
		fun << (Bool_SeatMidmiddleStatus);
		fun << (Bool_SeatLeftmiddleStatus);
		fun << (Bool_SeatLeftrearStatus);
		fun << (Bool_SeatRigntrearStatus);
		fun << (Bool_SeatMidrearStatus);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Bool_SeatDriverStatus);
		fun >> (Bool_SeatCodriverStatus);
		fun >> (Bool_SeatRightmiddleStatus);
		fun >> (Bool_SeatMidmiddleStatus);
		fun >> (Bool_SeatLeftmiddleStatus);
		fun >> (Bool_SeatLeftrearStatus);
		fun >> (Bool_SeatRigntrearStatus);
		fun >> (Bool_SeatMidrearStatus);
	}
};

#endif //____STRUCT_SEATIDST_H__
