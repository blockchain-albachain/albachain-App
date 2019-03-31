[Uno.Compiler.UxGenerated]
public partial class IconAndLabel: Fuse.Controls.Container
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Controls.Panel iconContainer;
    static IconAndLabel()
    {
    }
    [global::Uno.UX.UXConstructor]
    public IconAndLabel()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::BaseText();
        temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, albachain_accessor_IconAndLabel_Text.Singleton);
        var temp3 = new global::Fuse.Controls.DockPanel();
        iconContainer = new global::Fuse.Controls.Panel();
        var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        this.SourceLineNumber = 5;
        this.SourceFileName = "Components/BottomBar.ux";
        temp3.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        temp3.Padding = float4(0f, 7f, 0f, 7f);
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "Components/BottomBar.ux";
        temp3.Children.Add(iconContainer);
        temp3.Children.Add(temp);
        iconContainer.Alignment = Fuse.Elements.Alignment.Center;
        iconContainer.Name = __selector1;
        iconContainer.SourceLineNumber = 9;
        iconContainer.SourceFileName = "Components/BottomBar.ux";
        temp.FontSize = 8f;
        temp.Color = float4(0.6666667f, 0.6666667f, 0.6666667f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp.SourceLineNumber = 10;
        temp.SourceFileName = "Components/BottomBar.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Bottom);
        temp.Bindings.Add(temp4);
        temp2.SourceLineNumber = 10;
        temp2.SourceFileName = "Components/BottomBar.ux";
        temp1.SourceLineNumber = 10;
        temp1.SourceFileName = "Components/BottomBar.ux";
        this.Subtree = iconContainer;
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "iconContainer";
}
