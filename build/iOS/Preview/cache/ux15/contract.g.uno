[Uno.Compiler.UxGenerated]
public partial class contract: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static contract()
    {
    }
    [global::Uno.UX.UXConstructor]
    public contract(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/contract.ux";
    }
}
