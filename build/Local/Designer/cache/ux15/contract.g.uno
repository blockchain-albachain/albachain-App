[Uno.Compiler.UxGenerated]
public partial class contract: Fuse.Controls.Page
{
    static contract()
    {
    }
    [global::Uno.UX.UXConstructor]
    public contract()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/contract.ux";
        temp.Value = "contract";
        temp.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "Pages/individual/contract.ux";
        this.Children.Add(temp);
    }
}
