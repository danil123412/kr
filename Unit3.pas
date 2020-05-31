Unit Unit3;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form3 = class(Form)
    procedure readFileBtn_Click(sender: Object; e: EventArgs);
    procedure Form3_Load(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit3.Form3.resources}
    raspisanietable: DataGridView;
    button1: Button;
    button2: Button;
    button3: Button;
    Nomer: DataGridViewTextBoxColumn;
    StOtpr: DataGridViewTextBoxColumn;
    StPrib: DataGridViewTextBoxColumn;
    StProm: DataGridViewTextBoxColumn;
    Klass: DataGridViewTextBoxColumn;
    Tip: DataGridViewTextBoxColumn;
    VrOtpr: DataGridViewTextBoxColumn;
    VrPrib: DataGridViewTextBoxColumn;
    Money: DataGridViewTextBoxColumn;
    textBox2: TextBox;
    textBox1: TextBox;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    textBox3: TextBox;
    label4: &Label;
    readFileBtn: Button;
    {$include Unit3.Form3.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form3.readFileBtn_Click(sender: Object; e: EventArgs);
var
  dataFile: PABCSystem.Text;
  Nomer, StOtpr, StPrib, StProm, Klass, Tip, VrOtpr, VrPrib, Money:string;
begin
  assign(dataFile, 'raspisanie-file.txt'); 
  reset(dataFile);
  raspisanietable.RowCount :=0;
  while not(EOF(dataFile)) do begin
    readln(dataFile, Nomer);
    readln(dataFile, StOtpr);
    readln(dataFile, StPrib);
    readln(dataFile, StProm);
    readln(dataFile, Klass);
    readln(dataFile, Tip);
    readln(dataFile, VrOtpr);
    readln(dataFile, VrPrib);
    readln(dataFile, Money);
    raspisanietable.Rows.Add(Nomer, StOtpr, StPrib, StProm, Klass, Tip, VrOtpr, VrPrib, Money); 
end;
CloseFile(dataFile);
end;

procedure Form3.Form3_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form3.button1_Click(sender: Object; e: EventArgs);
begin
  
end;
Begin
  
end.
