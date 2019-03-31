[Uno.Compiler.UxGenerated]
public partial class BottomBar: Fuse.Controls.Grid
{
    static BottomBar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BottomBar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::IconAndLabel();
        var temp1 = new global::HomeIcon();
        var temp2 = new global::Divider();
        var temp3 = new global::IconAndLabel();
        var temp4 = new global::LogsIcon();
        var temp5 = new global::Divider();
        var temp6 = new global::IconAndLabel();
        var temp7 = new global::GoalsIcon();
        var temp8 = new global::Divider();
        var temp9 = new global::IconAndLabel();
        var temp10 = new global::ProfileIcon();
        var temp11 = new global::Fuse.Controls.Rectangle();
        this.Columns = "1*, auto, 1*, auto, 1*, auto, 1*";
        this.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/BottomBar.ux";
        temp.Text = "HOME";
        temp.SourceLineNumber = 15;
        temp.SourceFileName = "Components/BottomBar.ux";
        temp.SubtreeNodes.Add(temp1);
        temp1.SourceLineNumber = 16;
        temp1.SourceFileName = "Components/BottomBar.ux";
        temp2.SourceLineNumber = 20;
        temp2.SourceFileName = "Components/BottomBar.ux";
        temp3.Text = "CONTRACT";
        temp3.SourceLineNumber = 22;
        temp3.SourceFileName = "Components/BottomBar.ux";
        temp3.SubtreeNodes.Add(temp4);
        temp4.SourceLineNumber = 23;
        temp4.SourceFileName = "Components/BottomBar.ux";
        temp5.SourceLineNumber = 26;
        temp5.SourceFileName = "Components/BottomBar.ux";
        temp6.Text = "CHECK";
        temp6.SourceLineNumber = 28;
        temp6.SourceFileName = "Components/BottomBar.ux";
        temp6.SubtreeNodes.Add(temp7);
        temp7.SourceLineNumber = 29;
        temp7.SourceFileName = "Components/BottomBar.ux";
        temp8.SourceLineNumber = 32;
        temp8.SourceFileName = "Components/BottomBar.ux";
        temp9.Text = "PROFILE";
        temp9.SourceLineNumber = 34;
        temp9.SourceFileName = "Components/BottomBar.ux";
        temp9.SubtreeNodes.Add(temp10);
        temp10.SourceLineNumber = 35;
        temp10.SourceFileName = "Components/BottomBar.ux";
        temp11.Color = float4(0.2f, 0.2f, 0.2f, 1f);
        temp11.Layer = Fuse.Layer.Background;
        temp11.SourceLineNumber = 38;
        temp11.SourceFileName = "Components/BottomBar.ux";
        this.Children.Add(temp);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp11);
    }
}
