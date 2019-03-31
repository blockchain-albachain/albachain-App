// This file was generated based on /Users/kbs/development/albachain/albachain.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[22];

namespace g{

// public static generated class albachain_bundle :0
// {
// static albachain_bundle() :0
static void albachain_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    albachain_bundle::back2e409c1b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[1/*"back-b29c01...*/]);
    albachain_bundle::goals1xe88cf64b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[2/*"goals_1x-f6...*/]);
    albachain_bundle::goals2xe88d0ace_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[3/*"goals_2x-a6...*/]);
    albachain_bundle::goals4xe88d12d0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[4/*"goals_4x-29...*/]);
    albachain_bundle::home1xd13a7c7e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[5/*"home_1x-66a...*/]);
    albachain_bundle::home2x4b71b2ad_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[6/*"home_2x-66a...*/]);
    albachain_bundle::home4xce4cf64f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[7/*"home_4x-66a...*/]);
    albachain_bundle::login30c4c83e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[8/*"login-6d3ba...*/]);
    albachain_bundle::logs1x2995b326_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[9/*"logs_1x-d61...*/]);
    albachain_bundle::logs2xa5b46bc1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[10/*"logs_2x-d61...*/]);
    albachain_bundle::logs4x22d9281f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[11/*"logs_4x-d61...*/]);
    albachain_bundle::mainviewBis5fc20f6c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[12/*"mainviewbis...*/]);
    albachain_bundle::mainviewInd18fc5dce_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[13/*"mainviewind...*/]);
    albachain_bundle::NunitoBlack56f90429_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[14/*"nunito-blac...*/]);
    albachain_bundle::NunitoBoldb5380727_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[15/*"nunito-bold...*/]);
    albachain_bundle::profile1x4331ab4a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[16/*"profile_1x-...*/]);
    albachain_bundle::profile2x43319f49_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[17/*"profile_2x-...*/]);
    albachain_bundle::profile4x43319747_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[18/*"profile_4x-...*/]);
    albachain_bundle::RobotoMediumeb2239d0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[19/*"roboto-medi...*/]);
    albachain_bundle::signupBisa991c450_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[20/*"signupbis-9...*/]);
    albachain_bundle::signupIndd6326ffa_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"albachain"*/]))->GetFile(::STRINGS[21/*"signupind-7...*/]);
}

static void albachain_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("albachain");
    ::STRINGS[1] = uString::Const("back-b29c01f6.png");
    ::STRINGS[2] = uString::Const("goals_1x-f6fbdeb4.png");
    ::STRINGS[3] = uString::Const("goals_2x-a62f1763.png");
    ::STRINGS[4] = uString::Const("goals_4x-290a5b05.png");
    ::STRINGS[5] = uString::Const("home_1x-66aeae49.png");
    ::STRINGS[6] = uString::Const("home_2x-66aeaa46.png");
    ::STRINGS[7] = uString::Const("home_4x-66aea244.png");
    ::STRINGS[8] = uString::Const("login-6d3ba557.js");
    ::STRINGS[9] = uString::Const("logs_1x-d61e2215.png");
    ::STRINGS[10] = uString::Const("logs_2x-d61e2e16.png");
    ::STRINGS[11] = uString::Const("logs_4x-d61e3618.png");
    ::STRINGS[12] = uString::Const("mainviewbis-53dfa9af.js");
    ::STRINGS[13] = uString::Const("mainviewind-926a47ff.js");
    ::STRINGS[14] = uString::Const("nunito-black-7f1f1544.ttf");
    ::STRINGS[15] = uString::Const("nunito-bold-8bdb45a6.ttf");
    ::STRINGS[16] = uString::Const("profile_1x-8fd3b1a5.png");
    ::STRINGS[17] = uString::Const("profile_2x-0bf26a40.png");
    ::STRINGS[18] = uString::Const("profile_4x-8917269e.png");
    ::STRINGS[19] = uString::Const("roboto-medium-44b3d1db.ttf");
    ::STRINGS[20] = uString::Const("signupbis-91979ad7.js");
    ::STRINGS[21] = uString::Const("signupind-717e040f.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::back2e409c1b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::goals1xe88cf64b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::goals2xe88d0ace_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::goals4xe88d12d0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::home1xd13a7c7e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::home2x4b71b2ad_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::home4xce4cf64f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::login30c4c83e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::logs1x2995b326_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::logs2xa5b46bc1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::logs4x22d9281f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::mainviewBis5fc20f6c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::mainviewInd18fc5dce_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::NunitoBlack56f90429_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::NunitoBoldb5380727_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::profile1x4331ab4a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::profile2x43319f49_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::profile4x43319747_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::RobotoMediumeb2239d0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::signupBisa991c450_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&albachain_bundle::signupIndd6326ffa_, uFieldFlagsStatic);
    type->Reflection.SetFields(21,
        new uField("back2e409c1b", 0),
        new uField("goals1xe88cf64b", 1),
        new uField("goals2xe88d0ace", 2),
        new uField("goals4xe88d12d0", 3),
        new uField("home1xd13a7c7e", 4),
        new uField("home2x4b71b2ad", 5),
        new uField("home4xce4cf64f", 6),
        new uField("login30c4c83e", 7),
        new uField("logs1x2995b326", 8),
        new uField("logs2xa5b46bc1", 9),
        new uField("logs4x22d9281f", 10),
        new uField("mainviewBis5fc20f6c", 11),
        new uField("mainviewInd18fc5dce", 12),
        new uField("NunitoBlack56f90429", 13),
        new uField("NunitoBoldb5380727", 14),
        new uField("profile1x4331ab4a", 15),
        new uField("profile2x43319f49", 16),
        new uField("profile4x43319747", 17),
        new uField("RobotoMediumeb2239d0", 18),
        new uField("signupBisa991c450", 19),
        new uField("signupIndd6326ffa", 20));
}

uClassType* albachain_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("albachain_bundle", options);
    type->fp_build_ = albachain_bundle_build;
    type->fp_cctor_ = albachain_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::back2e409c1b_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::goals1xe88cf64b_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::goals2xe88d0ace_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::goals4xe88d12d0_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::home1xd13a7c7e_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::home2x4b71b2ad_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::home4xce4cf64f_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::login30c4c83e_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::logs1x2995b326_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::logs2xa5b46bc1_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::logs4x22d9281f_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::mainviewBis5fc20f6c_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::mainviewInd18fc5dce_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::NunitoBlack56f90429_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::NunitoBoldb5380727_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::profile1x4331ab4a_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::profile2x43319f49_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::profile4x43319747_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::RobotoMediumeb2239d0_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::signupBisa991c450_;
uSStrong< ::g::Uno::IO::BundleFile*> albachain_bundle::signupIndd6326ffa_;
// }

} // ::g
