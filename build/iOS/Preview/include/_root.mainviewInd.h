// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct contract;}
namespace g{struct home;}
namespace g{struct mainviewInd;}

namespace g{

// public partial sealed class mainviewInd :2
// {
::g::Fuse::Controls::Panel_type* mainviewInd_typeof();
void mainviewInd__ctor_8_fn(mainviewInd* __this, ::g::Fuse::Navigation::Router* router1);
void mainviewInd__InitializeUX_fn(mainviewInd* __this);
void mainviewInd__New5_fn(::g::Fuse::Navigation::Router* router1, mainviewInd** __retval);

struct mainviewInd : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::home*> home;
    uStrong< ::g::contract*> contract;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return mainviewInd_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return mainviewInd_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return mainviewInd_typeof()->Init(), __selector1_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static mainviewInd* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
