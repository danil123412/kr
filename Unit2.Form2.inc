procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 119);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(154, 48);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Администратор';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(12, 64);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(154, 49);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Пользователь';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(12, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(154, 23);
        self.label1.TabIndex := 2;
        self.label1.Text := 'Войти как:';
        // 
        // Form2
        // 
        self.ClientSize := new System.Drawing.Size(176, 179);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Name := 'Form2';
        self.Text := 'Form2';
        self.ResumeLayout(false);
    end;
