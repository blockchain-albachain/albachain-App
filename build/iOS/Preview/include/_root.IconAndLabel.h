// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/IconAndLabel.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct IconAndLabel;}

namespace g{

// public partial sealed class IconAndLabel :2
// {
::g::Fuse::Controls::Panel_type* IconAndLabel_typeof();
void IconAndLabel__ctor_8_fn(IconAndLabel* __this);
void IconAndLabel__InitializeUX_fn(IconAndLabel* __this);
void IconAndLabel__New5_fn(IconAndLabel** __retval);
void IconAndLabel__SetText_fn(IconAndLabel* __this, uString* value, uObject* origin);
void IconAndLabel__get_Text_fn(IconAndLabel* __this, uString** __retval);
void IconAndLabel__set_Text_fn(IconAndLabel* __this, uString* value);

struct IconAndLabel : ::g::Fuse::Controls::Container
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> iconContainer;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return IconAndLabel_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return IconAndLabel_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static IconAndLabel* New5();
};
// }

} // ::g
