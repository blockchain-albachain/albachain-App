// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/albachain.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[19];

namespace g{

// public static generated class albachain_bundle :0
// {
// static albachain_bundle() :0
static void albachain_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    albachain_bundle::albachain01efde3915_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[1/*"albachain01...*/]);
    albachain_bundle::back0dcaacc8_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[2/*"back-b29c01...*/]);
    albachain_bundle::contract7b86f1f2_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[3/*"contract-1a...*/]);
    albachain_bundle::contractCheck33819bed_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[4/*"contractche...*/]);
    albachain_bundle::login637f13ff_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[5/*"login-6d3ba...*/]);
    albachain_bundle::mainviewBis6a04abf7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[6/*"mainviewbis...*/]);
    albachain_bundle::mainviewInd5364505f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[7/*"mainviewind...*/]);
    albachain_bundle::manage403c4858_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[8/*"manage-5681...*/]);
    albachain_bundle::NunitoBlack890b1e1e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[9/*"nunito-blac...*/]);
    albachain_bundle::NunitoBold7f7d3450_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[10/*"nunito-bold...*/]);
    albachain_bundle::profile93e6938a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[11/*"profile-f3f...*/]);
    albachain_bundle::profileInd02907cbe_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[12/*"profileind-...*/]);
    albachain_bundle::registration39107b9a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[13/*"registratio...*/]);
    albachain_bundle::RobotoBlacke33ab162_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[14/*"roboto-blac...*/]);
    albachain_bundle::RobotoMediuma3668f28_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[15/*"roboto-medi...*/]);
    albachain_bundle::searchae1e1739_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[16/*"search-9113...*/]);
    albachain_bundle::signupBis1cda2937_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[17/*"signupbis-9...*/]);
    albachain_bundle::signupInd91c44217_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[18/*"signupind-7...*/]);
}

static void albachain_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("albachain");
    ::STRINGS[1] = uString::Const("albachain01-7522275d.png");
    ::STRINGS[2] = uString::Const("back-b29c01f6.png");
    ::STRINGS[3] = uString::Const("contract-1a1fc4cc.js");
    ::STRINGS[4] = uString::Const("contractcheck-f85c7235.js");
    ::STRINGS[5] = uString::Const("login-6d3ba557.js");
    ::STRINGS[6] = uString::Const("mainviewbis-53dfa9af.js");
    ::STRINGS[7] = uString::Const("mainviewind-926a47ff.js");
    ::STRINGS[8] = uString::Const("manage-568124fe.js");
    ::STRINGS[9] = uString::Const("nunito-black-7f1f1544.ttf");
    ::STRINGS[10] = uString::Const("nunito-bold-8bdb45a6.ttf");
    ::STRINGS[11] = uString::Const("profile-f3f46dd8.js");
    ::STRINGS[12] = uString::Const("profileind-78c9694c.js");
    ::STRINGS[13] = uString::Const("registration-2631b224.js");
    ::STRINGS[14] = uString::Const("roboto-black-db688930.ttf");
    ::STRINGS[15] = uString::Const("roboto-medium-f749abf6.ttf");
    ::STRINGS[16] = uString::Const("search-91137df9.png");
    ::STRINGS[17] = uString::Const("signupbis-91979ad7.js");
    ::STRINGS[18] = uString::Const("signupind-717e040f.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::albachain01efde3915_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::back0dcaacc8_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::contract7b86f1f2_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::contractCheck33819bed_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::login637f13ff_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::mainviewBis6a04abf7_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::mainviewInd5364505f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::manage403c4858_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::NunitoBlack890b1e1e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::NunitoBold7f7d3450_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::profile93e6938a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::profileInd02907cbe_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::registration39107b9a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::RobotoBlacke33ab162_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::RobotoMediuma3668f28_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::searchae1e1739_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::signupBis1cda2937_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::signupInd91c44217_, uFieldFlagsStatic);
    type->Reflection.SetFields(18,
        new uField("albachain01efde3915", 0),
        new uField("back0dcaacc8", 1),
        new uField("contract7b86f1f2", 2),
        new uField("contractCheck33819bed", 3),
        new uField("login637f13ff", 4),
        new uField("mainviewBis6a04abf7", 5),
        new uField("mainviewInd5364505f", 6),
        new uField("manage403c4858", 7),
        new uField("NunitoBlack890b1e1e", 8),
        new uField("NunitoBold7f7d3450", 9),
        new uField("profile93e6938a", 10),
        new uField("profileInd02907cbe", 11),
        new uField("registration39107b9a", 12),
        new uField("RobotoBlacke33ab162", 13),
        new uField("RobotoMediuma3668f28", 14),
        new uField("searchae1e1739", 15),
        new uField("signupBis1cda2937", 16),
        new uField("signupInd91c44217", 17));
}

uClassType* albachain_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("albachain_bundle", options);
    type->fp_build_ = albachain_bundle_build;
    type->fp_cctor_ = albachain_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::albachain01efde3915_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::back0dcaacc8_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::contract7b86f1f2_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::contractCheck33819bed_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::login637f13ff_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::mainviewBis6a04abf7_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::mainviewInd5364505f_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::manage403c4858_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::NunitoBlack890b1e1e_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::NunitoBold7f7d3450_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::profile93e6938a_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::profileInd02907cbe_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::registration39107b9a_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::RobotoBlacke33ab162_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::RobotoMediuma3668f28_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::searchae1e1739_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::signupBis1cda2937_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::signupInd91c44217_;
// }

} // ::g
