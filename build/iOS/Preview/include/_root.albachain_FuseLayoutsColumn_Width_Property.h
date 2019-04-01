// This file was generated based on /Users/kbs/development/albachain-App/build/iOS/Preview/cache/ux15/albachain.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct albachain_FuseLayoutsColumn_Width_Property;}

namespace g{

// internal sealed class albachain_FuseLayoutsColumn_Width_Property :96
// {
::g::Uno::UX::Property1_type* albachain_FuseLayoutsColumn_Width_Property_typeof();
void albachain_FuseLayoutsColumn_Width_Property__ctor_3_fn(albachain_FuseLayoutsColumn_Width_Property* __this, ::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name);
void albachain_FuseLayoutsColumn_Width_Property__Get1_fn(albachain_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void albachain_FuseLayoutsColumn_Width_Property__New1_fn(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name, albachain_FuseLayoutsColumn_Width_Property** __retval);
void albachain_FuseLayoutsColumn_Width_Property__get_Object_fn(albachain_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void albachain_FuseLayoutsColumn_Width_Property__Set1_fn(albachain_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct albachain_FuseLayoutsColumn_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Layouts::Column*> _obj;

    void ctor_3(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name);
    static albachain_FuseLayoutsColumn_Width_Property* New1(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
