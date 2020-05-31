Unit Unit2;

interface

uses System,Unit1,Unit4,  Unit3,System.Drawing, System.Windows.Forms;

type
  Form2 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit2.Form2.resources}
    button2: Button;
    label1: &Label;
    button1: Button;
    {$include Unit2.Form2.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form2.button1_Click(sender: Object; e: EventArgs);
begin
  
  Form(new Form4).Show
  
end;

procedure Form2.button2_Click(sender: Object; e: EventArgs);
begin
  Form(new Form3).Show;
end;

end.
