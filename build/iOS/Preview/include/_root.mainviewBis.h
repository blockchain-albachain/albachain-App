// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/mainviewBis.g.uno.
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
namespace g{struct mainviewBis;}

namespace g{

// public partial sealed class mainviewBis :2
// {
::g::Fuse::Controls::Panel_type* mainviewBis_typeof();
void mainviewBis__ctor_8_fn(mainviewBis* __this, ::g::Fuse::Navigation::Router* router1);
void mainviewBis__InitializeUX_fn(mainviewBis* __this);
void mainviewBis__New5_fn(::g::Fuse::Navigation::Router* router1, mainviewBis** __retval);

struct mainviewBis : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return mainviewBis_typeof()->Init(), __g_static_nametable1_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static mainviewBis* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
