procedure InitializeComponent;
    begin
        self.rasppoezdovtable := new System.Windows.Forms.DataGridView();
        self.Nomer := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.StOtpr := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.StPrib := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.StProm := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Klass := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Tip := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.VrOtpr := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.VrPrib := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Money := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.createDataBtn := new System.Windows.Forms.Button();
        self.addUserBtn := new System.Windows.Forms.Button();
        self.deleteBtn := new System.Windows.Forms.Button();
        self.readFromFileBtn := new System.Windows.Forms.Button();
        self.SaveInFileBtn := new System.Windows.Forms.Button();
        self.NomerBox := new System.Windows.Forms.TextBox();
        self.StOtprBox := new System.Windows.Forms.TextBox();
        self.StPribBox := new System.Windows.Forms.TextBox();
        self.StPromBox := new System.Windows.Forms.TextBox();
        self.KlassBox := new System.Windows.Forms.TextBox();
        self.TipBox := new System.Windows.Forms.TextBox();
        self.VrOtprBox := new System.Windows.Forms.TextBox();
        self.VrPribBox := new System.Windows.Forms.TextBox();
        self.MoneyBox := new System.Windows.Forms.TextBox();
        (System.ComponentModel.ISupportInitialize(self.rasppoezdovtable)).BeginInit();
        self.SuspendLayout();
        // 
        // rasppoezdovtable
        // 
        self.rasppoezdovtable.AllowUserToAddRows := false;
        self.rasppoezdovtable.AllowUserToDeleteRows := false;
        self.rasppoezdovtable.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.rasppoezdovtable.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[9](self.Nomer, self.StOtpr, self.StPrib, self.StProm, self.Klass, self.Tip, self.VrOtpr, self.VrPrib, self.Money));
        self.rasppoezdovtable.Location := new System.Drawing.Point(12, 7);
        self.rasppoezdovtable.Name := 'rasppoezdovtable';
        self.rasppoezdovtable.ReadOnly := true;
        self.rasppoezdovtable.Size := new System.Drawing.Size(678, 381);
        self.rasppoezdovtable.TabIndex := 0;
        // 
        // Nomer
        // 
        self.Nomer.HeaderText := 'Номер';
        self.Nomer.Name := 'Nomer';
        self.Nomer.ReadOnly := true;
        self.Nomer.Width := 70;
        // 
        // StOtpr
        // 
        self.StOtpr.HeaderText := 'Станция отправления';
        self.StOtpr.Name := 'StOtpr';
        self.StOtpr.ReadOnly := true;
        self.StOtpr.Width := 70;
        // 
        // StPrib
        // 
        self.StPrib.HeaderText := 'Станция прибытия';
        self.StPrib.Name := 'StPrib';
        self.StPrib.ReadOnly := true;
        self.StPrib.Width := 70;
        // 
        // StProm
        // 
        self.StProm.HeaderText := 'Промежуточные станции';
        self.StProm.Name := 'StProm';
        self.StProm.ReadOnly := true;
        self.StProm.Width := 70;
        // 
        // Klass
        // 
        self.Klass.HeaderText := 'Класс';
        self.Klass.Name := 'Klass';
        self.Klass.ReadOnly := true;
        self.Klass.Width := 70;
        // 
        // Tip
        // 
        self.Tip.HeaderText := 'Тип';
        self.Tip.Name := 'Tip';
        self.Tip.ReadOnly := true;
        self.Tip.Width := 70;
        // 
        // VrOtpr
        // 
        self.VrOtpr.HeaderText := 'Время отправления';
        self.VrOtpr.Name := 'VrOtpr';
        self.VrOtpr.ReadOnly := true;
        self.VrOtpr.Width := 70;
        // 
        // VrPrib
        // 
        self.VrPrib.HeaderText := 'Время прибытия';
        self.VrPrib.Name := 'VrPrib';
        self.VrPrib.ReadOnly := true;
        self.VrPrib.Width := 70;
        // 
        // Money
        // 
        self.Money.HeaderText := 'Цена';
        self.Money.Name := 'Money';
        self.Money.ReadOnly := true;
        self.Money.Width := 70;
        // 
        // createDataBtn
        // 
        self.createDataBtn.Location := new System.Drawing.Point(12, 394);
        self.createDataBtn.Name := 'createDataBtn';
        self.createDataBtn.Size := new System.Drawing.Size(89, 63);
        self.createDataBtn.TabIndex := 1;
        self.createDataBtn.Text := 'Заполнить';
        self.createDataBtn.UseVisualStyleBackColor := true;
        self.createDataBtn.Click += createDataBtn_Click;
        // 
        // addUserBtn
        // 
        self.addUserBtn.Location := new System.Drawing.Point(107, 394);
        self.addUserBtn.Name := 'addUserBtn';
        self.addUserBtn.Size := new System.Drawing.Size(89, 63);
        self.addUserBtn.TabIndex := 2;
        self.addUserBtn.Text := 'Добавить';
        self.addUserBtn.UseVisualStyleBackColor := true;
        self.addUserBtn.Click += addUserBtn_Click;
        // 
        // deleteBtn
        // 
        self.deleteBtn.Location := new System.Drawing.Point(202, 394);
        self.deleteBtn.Name := 'deleteBtn';
        self.deleteBtn.Size := new System.Drawing.Size(89, 63);
        self.deleteBtn.TabIndex := 3;
        self.deleteBtn.Text := 'Удалить';
        self.deleteBtn.UseVisualStyleBackColor := true;
        self.deleteBtn.Click += deleteBtn_Click;
        // 
        // readFromFileBtn
        // 
        self.readFromFileBtn.Location := new System.Drawing.Point(297, 394);
        self.readFromFileBtn.Name := 'readFromFileBtn';
        self.readFromFileBtn.Size := new System.Drawing.Size(89, 63);
        self.readFromFileBtn.TabIndex := 4;
        self.readFromFileBtn.Text := 'Считать из файла';
        self.readFromFileBtn.UseVisualStyleBackColor := true;
        self.readFromFileBtn.Click += readFromFileBtn_Click;
        // 
        // SaveInFileBtn
        // 
        self.SaveInFileBtn.Location := new System.Drawing.Point(392, 394);
        self.SaveInFileBtn.Name := 'SaveInFileBtn';
        self.SaveInFileBtn.Size := new System.Drawing.Size(89, 63);
        self.SaveInFileBtn.TabIndex := 5;
        self.SaveInFileBtn.Text := 'Сохранить в файл';
        self.SaveInFileBtn.UseVisualStyleBackColor := true;
        self.SaveInFileBtn.Click += SaveInFileBtn_Click;
        // 
        // NomerBox
        // 
        self.NomerBox.Location := new System.Drawing.Point(696, 7);
        self.NomerBox.Multiline := true;
        self.NomerBox.Name := 'NomerBox';
        self.NomerBox.Size := new System.Drawing.Size(89, 37);
        self.NomerBox.TabIndex := 6;
        // 
        // StOtprBox
        // 
        self.StOtprBox.Location := new System.Drawing.Point(696, 50);
        self.StOtprBox.Multiline := true;
        self.StOtprBox.Name := 'StOtprBox';
        self.StOtprBox.Size := new System.Drawing.Size(89, 37);
        self.StOtprBox.TabIndex := 7;
        // 
        // StPribBox
        // 
        self.StPribBox.Location := new System.Drawing.Point(696, 93);
        self.StPribBox.Multiline := true;
        self.StPribBox.Name := 'StPribBox';
        self.StPribBox.Size := new System.Drawing.Size(89, 37);
        self.StPribBox.TabIndex := 8;
        // 
        // StPromBox
        // 
        self.StPromBox.Location := new System.Drawing.Point(696, 136);
        self.StPromBox.Multiline := true;
        self.StPromBox.Name := 'StPromBox';
        self.StPromBox.Size := new System.Drawing.Size(89, 37);
        self.StPromBox.TabIndex := 9;
        // 
        // KlassBox
        // 
        self.KlassBox.Location := new System.Drawing.Point(696, 179);
        self.KlassBox.Multiline := true;
        self.KlassBox.Name := 'KlassBox';
        self.KlassBox.Size := new System.Drawing.Size(89, 37);
        self.KlassBox.TabIndex := 10;
        // 
        // TipBox
        // 
        self.TipBox.Location := new System.Drawing.Point(696, 222);
        self.TipBox.Multiline := true;
        self.TipBox.Name := 'TipBox';
        self.TipBox.Size := new System.Drawing.Size(89, 37);
        self.TipBox.TabIndex := 11;
        // 
        // VrOtprBox
        // 
        self.VrOtprBox.Location := new System.Drawing.Point(696, 265);
        self.VrOtprBox.Multiline := true;
        self.VrOtprBox.Name := 'VrOtprBox';
        self.VrOtprBox.Size := new System.Drawing.Size(89, 37);
        self.VrOtprBox.TabIndex := 12;
        // 
        // VrPribBox
        // 
        self.VrPribBox.Location := new System.Drawing.Point(696, 308);
        self.VrPribBox.Multiline := true;
        self.VrPribBox.Name := 'VrPribBox';
        self.VrPribBox.Size := new System.Drawing.Size(89, 37);
        self.VrPribBox.TabIndex := 13;
        // 
        // MoneyBox
        // 
        self.MoneyBox.Location := new System.Drawing.Point(696, 351);
        self.MoneyBox.Multiline := true;
        self.MoneyBox.Name := 'MoneyBox';
        self.MoneyBox.Size := new System.Drawing.Size(89, 37);
        self.MoneyBox.TabIndex := 14;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(796, 465);
        self.Controls.Add(self.MoneyBox);
        self.Controls.Add(self.VrPribBox);
        self.Controls.Add(self.VrOtprBox);
        self.Controls.Add(self.TipBox);
        self.Controls.Add(self.KlassBox);
        self.Controls.Add(self.StPromBox);
        self.Controls.Add(self.StPribBox);
        self.Controls.Add(self.StOtprBox);
        self.Controls.Add(self.NomerBox);
        self.Controls.Add(self.SaveInFileBtn);
        self.Controls.Add(self.readFromFileBtn);
        self.Controls.Add(self.deleteBtn);
        self.Controls.Add(self.addUserBtn);
        self.Controls.Add(self.createDataBtn);
        self.Controls.Add(self.rasppoezdovtable);
        self.Name := 'Form1';
        self.Text := 'Form1';
        (System.ComponentModel.ISupportInitialize(self.rasppoezdovtable)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
