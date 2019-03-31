[Uno.Compiler.UxGenerated]
public partial class contract: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
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
        var temp = new global::Fuse.Reactive.Data("goBack");
        var temp1 = new global::Fuse.Controls.Image();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/contract.ux";
        temp1.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp1.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp1.Margin = float4(20f, 20f, 0f, 0f);
        temp1.Padding = float4(0f, 0f, 0f, 0f);
        temp1.Layer = Fuse.Layer.Layout;
        temp1.SourceLineNumber = 5;
        temp1.SourceFileName = "Pages/individual/contract.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp1, temp_eb6.OnEvent);
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/back.png"));
        temp1.Bindings.Add(temp_eb6);
        temp.SourceLineNumber = 5;
        temp.SourceFileName = "Pages/individual/contract.ux";
        this.Children.Add(temp1);
    }
}
