// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/albachain.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct albachain_FuseControlsTextInputControl_Value_Property;}

namespace g{

// internal sealed class albachain_FuseControlsTextInputControl_Value_Property :46
// {
::g::Uno::UX::Property1_type* albachain_FuseControlsTextInputControl_Value_Property_typeof();
void albachain_FuseControlsTextInputControl_Value_Property__ctor_3_fn(albachain_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name);
void albachain_FuseControlsTextInputControl_Value_Property__Get1_fn(albachain_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void albachain_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, albachain_FuseControlsTextInputControl_Value_Property** __retval);
void albachain_FuseControlsTextInputControl_Value_Property__get_Object_fn(albachain_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void albachain_FuseControlsTextInputControl_Value_Property__Set1_fn(albachain_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void albachain_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(albachain_FuseControlsTextInputControl_Value_Property* __this, bool* __retval);

struct albachain_FuseControlsTextInputControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextInputControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
    static albachain_FuseControlsTextInputControl_Value_Property* New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
