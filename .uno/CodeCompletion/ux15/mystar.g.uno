[Uno.Compiler.UxGenerated]
public partial class mystar: Fuse.Controls.Star
{
    static mystar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public mystar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Drawing.Stroke();
        var temp1 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 0f, 1f));
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Width = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 33;
        this.SourceFileName = "Pages/individual/detailContractPage.ux";
        temp.Width = 1f;
        temp.Brush = temp1;
        this.Strokes.Add(temp);
    }
}
