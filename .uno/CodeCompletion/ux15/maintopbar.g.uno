[Uno.Compiler.UxGenerated]
public partial class maintopbar: Fuse.Controls.Page
{
    internal global::Fuse.Controls.Rectangle homebtn;
    internal global::Fuse.Reactive.EventBinding temp_eb15;
    internal global::Fuse.Controls.Rectangle boardbtn;
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    internal global::Fuse.Controls.Rectangle schebtn;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    static maintopbar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public maintopbar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Data("gotoHome");
        var temp1 = new global::Fuse.Reactive.Data("gotocontract");
        var temp2 = new global::Fuse.Reactive.Data("gotomanage");
        var temp3 = new global::Fuse.Controls.Panel();
        var temp4 = new global::Fuse.Controls.Grid();
        var temp5 = new global::Fuse.Controls.Panel();
        homebtn = new global::Fuse.Controls.Rectangle();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::Fuse.Gestures.Clicked();
        var temp8 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb15 = new global::Fuse.Reactive.EventBinding(temp);
        var temp9 = new global::Fuse.Gestures.WhilePressed();
        var temp10 = new global::Fuse.Animations.Scale();
        var temp11 = new global::Fuse.Controls.Panel();
        boardbtn = new global::Fuse.Controls.Rectangle();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Gestures.WhilePressed();
        var temp14 = new global::Fuse.Animations.Scale();
        var temp15 = new global::Fuse.Gestures.Clicked();
        var temp16 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp17 = new global::Fuse.Controls.Panel();
        schebtn = new global::Fuse.Controls.Rectangle();
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Gestures.WhilePressed();
        var temp20 = new global::Fuse.Animations.Scale();
        var temp21 = new global::Fuse.Gestures.Clicked();
        var temp22 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp2);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/maintopbar.ux";
        temp3.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp3.Alignment = Fuse.Elements.Alignment.Top;
        temp3.Margin = float4(0f, 40f, 0f, 0f);
        temp3.SourceLineNumber = 3;
        temp3.SourceFileName = "Pages/business/maintopbar.ux";
        temp3.Children.Add(temp4);
        temp4.RowCount = 1;
        temp4.ColumnCount = 3;
        temp4.ChildOrder = Fuse.Layouts.GridChildOrder.ColumnMajor;
        temp4.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp4.Opacity = 1f;
        temp4.LayoutRole = Fuse.LayoutRole.Standard;
        temp4.SourceLineNumber = 4;
        temp4.SourceFileName = "Pages/business/maintopbar.ux";
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp11);
        temp4.Children.Add(temp17);
        temp5.Alignment = Fuse.Elements.Alignment.Default;
        temp5.SourceLineNumber = 5;
        temp5.SourceFileName = "Pages/business/maintopbar.ux";
        temp5.Children.Add(homebtn);
        homebtn.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        homebtn.Name = __selector0;
        homebtn.SourceLineNumber = 6;
        homebtn.SourceFileName = "Pages/business/maintopbar.ux";
        homebtn.Children.Add(temp6);
        homebtn.Children.Add(temp7);
        homebtn.Children.Add(temp9);
        temp6.Value = "홈";
        temp6.FontSize = 10f;
        temp6.TextColor = float4(0.5647059f, 0.5686275f, 0.5686275f, 1f);
        temp6.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp6.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp6.SourceLineNumber = 8;
        temp6.SourceFileName = "Pages/business/maintopbar.ux";
        temp7.SourceLineNumber = 9;
        temp7.SourceFileName = "Pages/business/maintopbar.ux";
        temp7.Actions.Add(temp8);
        temp7.Bindings.Add(temp_eb15);
        temp8.SourceLineNumber = 10;
        temp8.SourceFileName = "Pages/business/maintopbar.ux";
        temp8.Handler += temp_eb15.OnEvent;
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "Pages/business/maintopbar.ux";
        temp9.SourceLineNumber = 12;
        temp9.SourceFileName = "Pages/business/maintopbar.ux";
        temp9.Animators.Add(temp10);
        temp10.Factor = 0.9f;
        temp10.Duration = 0.05;
        temp10.Target = homebtn;
        temp11.Alignment = Fuse.Elements.Alignment.Default;
        temp11.SourceLineNumber = 19;
        temp11.SourceFileName = "Pages/business/maintopbar.ux";
        temp11.Children.Add(boardbtn);
        boardbtn.Name = __selector1;
        boardbtn.SourceLineNumber = 20;
        boardbtn.SourceFileName = "Pages/business/maintopbar.ux";
        boardbtn.Children.Add(temp12);
        boardbtn.Children.Add(temp13);
        boardbtn.Children.Add(temp15);
        temp12.Value = "계약";
        temp12.FontSize = 10f;
        temp12.TextColor = float4(0.5921569f, 0.6f, 0.5960785f, 1f);
        temp12.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp12.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp12.SourceLineNumber = 25;
        temp12.SourceFileName = "Pages/business/maintopbar.ux";
        temp13.SourceLineNumber = 26;
        temp13.SourceFileName = "Pages/business/maintopbar.ux";
        temp13.Animators.Add(temp14);
        temp14.Factor = 0.9f;
        temp14.Duration = 0.05;
        temp14.Target = boardbtn;
        temp15.SourceLineNumber = 29;
        temp15.SourceFileName = "Pages/business/maintopbar.ux";
        temp15.Actions.Add(temp16);
        temp15.Bindings.Add(temp_eb16);
        temp16.SourceLineNumber = 30;
        temp16.SourceFileName = "Pages/business/maintopbar.ux";
        temp16.Handler += temp_eb16.OnEvent;
        temp1.SourceLineNumber = 30;
        temp1.SourceFileName = "Pages/business/maintopbar.ux";
        temp17.Alignment = Fuse.Elements.Alignment.Default;
        temp17.SourceLineNumber = 35;
        temp17.SourceFileName = "Pages/business/maintopbar.ux";
        temp17.Children.Add(schebtn);
        schebtn.Name = __selector2;
        schebtn.SourceLineNumber = 36;
        schebtn.SourceFileName = "Pages/business/maintopbar.ux";
        schebtn.Children.Add(temp18);
        schebtn.Children.Add(temp19);
        schebtn.Children.Add(temp21);
        temp18.Value = "관리";
        temp18.FontSize = 10f;
        temp18.TextColor = float4(0.5921569f, 0.6039216f, 0.5960785f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp18.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp18.SourceLineNumber = 38;
        temp18.SourceFileName = "Pages/business/maintopbar.ux";
        temp19.SourceLineNumber = 39;
        temp19.SourceFileName = "Pages/business/maintopbar.ux";
        temp19.Animators.Add(temp20);
        temp20.Factor = 0.9f;
        temp20.Duration = 0.05;
        temp20.Target = schebtn;
        temp21.SourceLineNumber = 42;
        temp21.SourceFileName = "Pages/business/maintopbar.ux";
        temp21.Actions.Add(temp22);
        temp21.Bindings.Add(temp_eb17);
        temp22.SourceLineNumber = 43;
        temp22.SourceFileName = "Pages/business/maintopbar.ux";
        temp22.Handler += temp_eb17.OnEvent;
        temp2.SourceLineNumber = 43;
        temp2.SourceFileName = "Pages/business/maintopbar.ux";
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "homebtn";
    static global::Uno.UX.Selector __selector1 = "boardbtn";
    static global::Uno.UX.Selector __selector2 = "schebtn";
}
