// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/BottomBar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
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
namespace g{struct BottomBar;}

namespace g{

// public partial sealed class BottomBar :2
// {
::g::Fuse::Controls::Panel_type* BottomBar_typeof();
void BottomBar__ctor_8_fn(BottomBar* __this);
void BottomBar__InitializeUX_fn(BottomBar* __this);
void BottomBar__New5_fn(BottomBar** __retval);

struct BottomBar : ::g::Fuse::Controls::Grid
{
    void ctor_8();
    void InitializeUX();
    static BottomBar* New5();
};
// }

} // ::g
