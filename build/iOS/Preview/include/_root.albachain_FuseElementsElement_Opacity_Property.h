// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/albachain.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct albachain_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class albachain_FuseElementsElement_Opacity_Property :34
// {
::g::Uno::UX::Property1_type* albachain_FuseElementsElement_Opacity_Property_typeof();
void albachain_FuseElementsElement_Opacity_Property__ctor_3_fn(albachain_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void albachain_FuseElementsElement_Opacity_Property__Get1_fn(albachain_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void albachain_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, albachain_FuseElementsElement_Opacity_Property** __retval);
void albachain_FuseElementsElement_Opacity_Property__get_Object_fn(albachain_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void albachain_FuseElementsElement_Opacity_Property__Set1_fn(albachain_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void albachain_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(albachain_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct albachain_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static albachain_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
