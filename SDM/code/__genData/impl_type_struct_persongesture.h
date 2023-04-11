#ifndef ____STRUCT_PERSONGESTURE_H__
#define ____STRUCT_PERSONGESTURE_H__


#include "impl_type_struct_rect_t.h"






struct Struct_PersonGesture {
public:
	bool Bool_Handheartgesture;
	bool Bool_OKgesture;
	bool Bool_Forefingercircleright;
	bool Bool_Forefingercircleleft;
	bool Bool_Upwardwave;
	bool Bool_Downwardwave;
	bool Bool_Wavepalmtotheright;
	bool Bool_Wavepalmtotheleft;
	bool Bool_Rockgesture;
	bool Bool_Scissorsgesture;
	bool Bool_Papergesture;
	bool Bool_Thumbupgestures;
	bool Bool_Thumbdowngestures;
	bool Bool_Thumbrightgestures;
	bool Bool_Thumbleftgestures;
	Struct_Rect_t Struct_Rect;
/*
	Struct_PersonGesture() {}
	~Struct_PersonGesture() {}
	Struct_PersonGesture(const bool _Bool_Handheartgesture,const bool _Bool_OKgesture,const bool _Bool_Forefingercircleright,const bool _Bool_Forefingercircleleft,const bool _Bool_Upwardwave,const bool _Bool_Downwardwave,const bool _Bool_Wavepalmtotheright,const bool _Bool_Wavepalmtotheleft,const bool _Bool_Rockgesture,const bool _Bool_Scissorsgesture,const bool _Bool_Papergesture,const bool _Bool_Thumbupgestures,const bool _Bool_Thumbdowngestures,const bool _Bool_Thumbrightgestures,const bool _Bool_Thumbleftgestures,const Struct_Rect_t _Struct_Rect):Bool_Handheartgesture(_Bool_Handheartgesture),Bool_OKgesture(_Bool_OKgesture),Bool_Forefingercircleright(_Bool_Forefingercircleright),Bool_Forefingercircleleft(_Bool_Forefingercircleleft),Bool_Upwardwave(_Bool_Upwardwave),Bool_Downwardwave(_Bool_Downwardwave),Bool_Wavepalmtotheright(_Bool_Wavepalmtotheright),Bool_Wavepalmtotheleft(_Bool_Wavepalmtotheleft),Bool_Rockgesture(_Bool_Rockgesture),Bool_Scissorsgesture(_Bool_Scissorsgesture),Bool_Papergesture(_Bool_Papergesture),Bool_Thumbupgestures(_Bool_Thumbupgestures),Bool_Thumbdowngestures(_Bool_Thumbdowngestures),Bool_Thumbrightgestures(_Bool_Thumbrightgestures),Bool_Thumbleftgestures(_Bool_Thumbleftgestures),Struct_Rect(_Struct_Rect) {}
	Struct_PersonGesture(const Struct_PersonGesture &_x){
		Bool_Handheartgesture = _x.Bool_Handheartgesture;
		Bool_OKgesture = _x.Bool_OKgesture;
		Bool_Forefingercircleright = _x.Bool_Forefingercircleright;
		Bool_Forefingercircleleft = _x.Bool_Forefingercircleleft;
		Bool_Upwardwave = _x.Bool_Upwardwave;
		Bool_Downwardwave = _x.Bool_Downwardwave;
		Bool_Wavepalmtotheright = _x.Bool_Wavepalmtotheright;
		Bool_Wavepalmtotheleft = _x.Bool_Wavepalmtotheleft;
		Bool_Rockgesture = _x.Bool_Rockgesture;
		Bool_Scissorsgesture = _x.Bool_Scissorsgesture;
		Bool_Papergesture = _x.Bool_Papergesture;
		Bool_Thumbupgestures = _x.Bool_Thumbupgestures;
		Bool_Thumbdowngestures = _x.Bool_Thumbdowngestures;
		Bool_Thumbrightgestures = _x.Bool_Thumbrightgestures;
		Bool_Thumbleftgestures = _x.Bool_Thumbleftgestures;
		Struct_Rect = _x.Struct_Rect;
	}
	Struct_PersonGesture(Struct_PersonGesture &&_x){
		Bool_Handheartgesture = std::move(_x.Bool_Handheartgesture);
		Bool_OKgesture = std::move(_x.Bool_OKgesture);
		Bool_Forefingercircleright = std::move(_x.Bool_Forefingercircleright);
		Bool_Forefingercircleleft = std::move(_x.Bool_Forefingercircleleft);
		Bool_Upwardwave = std::move(_x.Bool_Upwardwave);
		Bool_Downwardwave = std::move(_x.Bool_Downwardwave);
		Bool_Wavepalmtotheright = std::move(_x.Bool_Wavepalmtotheright);
		Bool_Wavepalmtotheleft = std::move(_x.Bool_Wavepalmtotheleft);
		Bool_Rockgesture = std::move(_x.Bool_Rockgesture);
		Bool_Scissorsgesture = std::move(_x.Bool_Scissorsgesture);
		Bool_Papergesture = std::move(_x.Bool_Papergesture);
		Bool_Thumbupgestures = std::move(_x.Bool_Thumbupgestures);
		Bool_Thumbdowngestures = std::move(_x.Bool_Thumbdowngestures);
		Bool_Thumbrightgestures = std::move(_x.Bool_Thumbrightgestures);
		Bool_Thumbleftgestures = std::move(_x.Bool_Thumbleftgestures);
		Struct_Rect = std::move(_x.Struct_Rect);
	}
	Struct_PersonGesture& operator=(const Struct_PersonGesture &_x){
		Bool_Handheartgesture = _x.Bool_Handheartgesture;
		Bool_OKgesture = _x.Bool_OKgesture;
		Bool_Forefingercircleright = _x.Bool_Forefingercircleright;
		Bool_Forefingercircleleft = _x.Bool_Forefingercircleleft;
		Bool_Upwardwave = _x.Bool_Upwardwave;
		Bool_Downwardwave = _x.Bool_Downwardwave;
		Bool_Wavepalmtotheright = _x.Bool_Wavepalmtotheright;
		Bool_Wavepalmtotheleft = _x.Bool_Wavepalmtotheleft;
		Bool_Rockgesture = _x.Bool_Rockgesture;
		Bool_Scissorsgesture = _x.Bool_Scissorsgesture;
		Bool_Papergesture = _x.Bool_Papergesture;
		Bool_Thumbupgestures = _x.Bool_Thumbupgestures;
		Bool_Thumbdowngestures = _x.Bool_Thumbdowngestures;
		Bool_Thumbrightgestures = _x.Bool_Thumbrightgestures;
		Bool_Thumbleftgestures = _x.Bool_Thumbleftgestures;
		Struct_Rect = _x.Struct_Rect;
		return *this;
	}
	Struct_PersonGesture& operator=(Struct_PersonGesture &&_x){
		Bool_Handheartgesture = std::move(_x.Bool_Handheartgesture);
		Bool_OKgesture = std::move(_x.Bool_OKgesture);
		Bool_Forefingercircleright = std::move(_x.Bool_Forefingercircleright);
		Bool_Forefingercircleleft = std::move(_x.Bool_Forefingercircleleft);
		Bool_Upwardwave = std::move(_x.Bool_Upwardwave);
		Bool_Downwardwave = std::move(_x.Bool_Downwardwave);
		Bool_Wavepalmtotheright = std::move(_x.Bool_Wavepalmtotheright);
		Bool_Wavepalmtotheleft = std::move(_x.Bool_Wavepalmtotheleft);
		Bool_Rockgesture = std::move(_x.Bool_Rockgesture);
		Bool_Scissorsgesture = std::move(_x.Bool_Scissorsgesture);
		Bool_Papergesture = std::move(_x.Bool_Papergesture);
		Bool_Thumbupgestures = std::move(_x.Bool_Thumbupgestures);
		Bool_Thumbdowngestures = std::move(_x.Bool_Thumbdowngestures);
		Bool_Thumbrightgestures = std::move(_x.Bool_Thumbrightgestures);
		Bool_Thumbleftgestures = std::move(_x.Bool_Thumbleftgestures);
		Struct_Rect = std::move(_x.Struct_Rect);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Bool_Handheartgesture);
		fun(Bool_OKgesture);
		fun(Bool_Forefingercircleright);
		fun(Bool_Forefingercircleleft);
		fun(Bool_Upwardwave);
		fun(Bool_Downwardwave);
		fun(Bool_Wavepalmtotheright);
		fun(Bool_Wavepalmtotheleft);
		fun(Bool_Rockgesture);
		fun(Bool_Scissorsgesture);
		fun(Bool_Papergesture);
		fun(Bool_Thumbupgestures);
		fun(Bool_Thumbdowngestures);
		fun(Bool_Thumbrightgestures);
		fun(Bool_Thumbleftgestures);
		fun(Struct_Rect);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Bool_Handheartgesture);
		fun(Bool_OKgesture);
		fun(Bool_Forefingercircleright);
		fun(Bool_Forefingercircleleft);
		fun(Bool_Upwardwave);
		fun(Bool_Downwardwave);
		fun(Bool_Wavepalmtotheright);
		fun(Bool_Wavepalmtotheleft);
		fun(Bool_Rockgesture);
		fun(Bool_Scissorsgesture);
		fun(Bool_Papergesture);
		fun(Bool_Thumbupgestures);
		fun(Bool_Thumbdowngestures);
		fun(Bool_Thumbrightgestures);
		fun(Bool_Thumbleftgestures);
		fun(Struct_Rect);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Bool_Handheartgesture);
		fun << (Bool_OKgesture);
		fun << (Bool_Forefingercircleright);
		fun << (Bool_Forefingercircleleft);
		fun << (Bool_Upwardwave);
		fun << (Bool_Downwardwave);
		fun << (Bool_Wavepalmtotheright);
		fun << (Bool_Wavepalmtotheleft);
		fun << (Bool_Rockgesture);
		fun << (Bool_Scissorsgesture);
		fun << (Bool_Papergesture);
		fun << (Bool_Thumbupgestures);
		fun << (Bool_Thumbdowngestures);
		fun << (Bool_Thumbrightgestures);
		fun << (Bool_Thumbleftgestures);
		fun << (Struct_Rect);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Bool_Handheartgesture);
		fun >> (Bool_OKgesture);
		fun >> (Bool_Forefingercircleright);
		fun >> (Bool_Forefingercircleleft);
		fun >> (Bool_Upwardwave);
		fun >> (Bool_Downwardwave);
		fun >> (Bool_Wavepalmtotheright);
		fun >> (Bool_Wavepalmtotheleft);
		fun >> (Bool_Rockgesture);
		fun >> (Bool_Scissorsgesture);
		fun >> (Bool_Papergesture);
		fun >> (Bool_Thumbupgestures);
		fun >> (Bool_Thumbdowngestures);
		fun >> (Bool_Thumbrightgestures);
		fun >> (Bool_Thumbleftgestures);
		fun >> (Struct_Rect);
	}
};

#endif //____STRUCT_PERSONGESTURE_H__
