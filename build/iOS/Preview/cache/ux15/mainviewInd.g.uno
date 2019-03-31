[Uno.Compiler.UxGenerated]
public partial class mainviewInd: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::home home;
    internal global::contract contract;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "home",
        "contract"
    };
    static mainviewInd()
    {
    }
    [global::Uno.UX.UXConstructor]
    public mainviewInd(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.iOS.StatusBarConfig();
        var temp1 = new global::Fuse.Android.StatusBarConfig();
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.DockPanel();
        var temp4 = new global::Fuse.Controls.Navigator();
        home = new global::home(router);
        contract = new global::contract(router);
        var temp5 = new global::BottomBar();
        var temp6 = new global::Fuse.Controls.BottomBarBackground();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp.SourceLineNumber = 2;
        temp.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp1.Color = float4(0f, 0f, 0f, 1f);
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp2.LineNumber = 6;
        temp2.FileName = "Pages/individual/mainviewInd.ux";
        temp2.SourceLineNumber = 6;
        temp2.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/individual/mainviewInd.js"));
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp6);
        temp4.DefaultPath = "home";
        temp4.SourceLineNumber = 9;
        temp4.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp4.Children.Add(home);
        temp4.Children.Add(contract);
        home.Color = float4(1f, 1f, 1f, 1f);
        home.Name = __selector0;
        home.SourceLineNumber = 10;
        home.SourceFileName = "Pages/individual/mainviewInd.ux";
        contract.Color = float4(1f, 1f, 1f, 1f);
        contract.Name = __selector1;
        contract.SourceLineNumber = 11;
        contract.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp5.SourceLineNumber = 14;
        temp5.SourceFileName = "Pages/individual/mainviewInd.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Bottom);
        temp6.SourceLineNumber = 15;
        temp6.SourceFileName = "Pages/individual/mainviewInd.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(home);
        __g_nametable.Objects.Add(contract);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "home";
    static global::Uno.UX.Selector __selector1 = "contract";
}
