// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mainviewInd.h>
#include <_root.mainviewInd.Template.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class mainviewInd.Template :6
// {
// static Template() :15
static void mainviewInd__Template__cctor__fn(uType* __type)
{
}

static void mainviewInd__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Pages/individual/mainviewInd.ux");
    type->SetFields(2,
        ::g::mainviewInd_typeof(), offsetof(mainviewInd__Template, __parent1), uFieldFlagsWeak,
        ::g::mainviewInd_typeof(), offsetof(mainviewInd__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)mainviewInd__Template__New2_fn, 0, true, type, 2, ::g::mainviewInd_typeof(), ::g::mainviewInd_typeof()));
}

::g::Uno::UX::Template_type* mainviewInd__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(mainviewInd__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("mainviewInd.Template", options);
    type->fp_build_ = mainviewInd__Template_build;
    type->fp_cctor_ = mainviewInd__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))mainviewInd__Template__New1_fn;
    return type;
}

// public Template(mainviewInd parent, mainviewInd parentInstance) :10
void mainviewInd__Template__ctor_1_fn(mainviewInd__Template* __this, ::g::mainviewInd* parent, ::g::mainviewInd* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void mainviewInd__Template__New1_fn(mainviewInd__Template* __this, uObject** __retval)
{
    uStackFrame __("mainviewInd.Template", "New()");
    ::g::Fuse::Controls::Circle* __self1 = ::g::Fuse::Controls::Circle::New3();
    __self1->Color(::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f));
    __self1->Margin(::g::Uno::Float4__New2(1.5f, 1.5f, 1.5f, 1.5f));
    __self1->SourceLineNumber(28);
    __self1->SourceFileName(::STRINGS[0/*"Pages/indiv...*/]);
    return *__retval = __self1, void();
}

// public Template New(mainviewInd parent, mainviewInd parentInstance) :10
void mainviewInd__Template__New2_fn(::g::mainviewInd* parent, ::g::mainviewInd* parentInstance, mainviewInd__Template** __retval)
{
    *__retval = mainviewInd__Template::New2(parent, parentInstance);
}

// public Template(mainviewInd parent, mainviewInd parentInstance) [instance] :10
void mainviewInd__Template::ctor_1(::g::mainviewInd* parent, ::g::mainviewInd* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(mainviewInd parent, mainviewInd parentInstance) [static] :10
mainviewInd__Template* mainviewInd__Template::New2(::g::mainviewInd* parent, ::g::mainviewInd* parentInstance)
{
    mainviewInd__Template* obj1 = (mainviewInd__Template*)uNew(mainviewInd__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
