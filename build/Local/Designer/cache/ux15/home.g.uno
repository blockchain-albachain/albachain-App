[Uno.Compiler.UxGenerated]
public partial class home: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static home()
    {
    }
    [global::Uno.UX.UXConstructor]
    public home(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/home.ux";
    }
}
