////////////////////////////////////////////////////////////////////////////////
// -------------------------------------------------------------------------- //
//                                                                            //
//                       (C) 2010-2015 Robot Developers                       //
//                       See LICENSE for licensing info                       //
//                                                                            //
// -------------------------------------------------------------------------- //
////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------//
// Prefaces                                                                   //
//----------------------------------------------------------------------------//

#ifndef ADDON_IMAGE_H
#define ADDON_IMAGE_H

#include "Common.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

class ImageWrap : public ObjectWrap
{
	DECLARE_ROBOT_TYPE (Image);

private:
	static void		Create			(const FunctionCallbackInfo<Value>& args);
	static void		Destroy			(const FunctionCallbackInfo<Value>& args);

	static void		GetData			(const FunctionCallbackInfo<Value>& args);
	static void		GetPixel		(const FunctionCallbackInfo<Value>& args);
	static void		SetPixel		(const FunctionCallbackInfo<Value>& args);

	static void		Fill			(const FunctionCallbackInfo<Value>& args);
	static void		Swap			(const FunctionCallbackInfo<Value>& args);
	static void		Flip			(const FunctionCallbackInfo<Value>& args);
	static void		Equals			(const FunctionCallbackInfo<Value>& args);

	static void		New				(const FunctionCallbackInfo<Value>& args);

public:
	static void		Initialize		(Handle<Object> exports);

public:
	Image mImage;
};

#endif // ADDON_IMAGE_H