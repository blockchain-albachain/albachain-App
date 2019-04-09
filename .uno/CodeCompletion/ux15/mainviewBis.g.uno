[Uno.Compiler.UxGenerated]
public partial class mainviewBis: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static mainviewBis()
    {
    }
    [global::Uno.UX.UXConstructor]
    public mainviewBis(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/mainviewBis.ux";
        temp.LineNumber = 3;
        temp.FileName = "Pages/business/mainviewBis.ux";
        temp.SourceLineNumber = 3;
        temp.SourceFileName = "Pages/business/mainviewBis.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/business/mainviewBis.js"));
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
    }
}
