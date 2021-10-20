object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 607
  ClientWidth = 911
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 728
    Top = 571
    Width = 169
    Height = 33
    Caption = 'Ejecutar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 111
    Width = 425
    Height = 65
    Caption = 'Entrada1'
    TabOrder = 1
    object Edit1: TEdit
      Left = 30
      Top = 24
      Width = 387
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object GroupBox2: TGroupBox
    Left = 439
    Top = 111
    Width = 226
    Height = 65
    Caption = 'Entrada2'
    TabOrder = 2
    object Edit2: TEdit
      Left = 24
      Top = 24
      Width = 185
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object GroupBox3: TGroupBox
    Left = 671
    Top = 111
    Width = 226
    Height = 65
    Caption = 'Entrada3'
    TabOrder = 3
    object Edit3: TEdit
      Left = 24
      Top = 24
      Width = 185
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object GroupBox4: TGroupBox
    Left = 8
    Top = 182
    Width = 425
    Height = 50
    Caption = 'Salida1'
    TabOrder = 4
    object Label1: TLabel
      Left = 16
      Top = 23
      Width = 46
      Height = 16
      Caption = 'Salida1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object GroupBox5: TGroupBox
    Left = 439
    Top = 182
    Width = 458
    Height = 50
    Caption = 'Salida2'
    TabOrder = 5
    object Label2: TLabel
      Left = 16
      Top = 24
      Width = 46
      Height = 16
      Caption = 'Salida2'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object GroupBox6: TGroupBox
    Left = 8
    Top = 238
    Width = 889
    Height = 75
    Caption = 'Vector1'
    TabOrder = 6
    object StringGrid1: TStringGrid
      Left = 16
      Top = 17
      Width = 705
      Height = 40
      FixedCols = 0
      RowCount = 1
      FixedRows = 0
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      TabOrder = 0
    end
    object Edit4: TEdit
      Left = 727
      Top = 16
      Width = 65
      Height = 41
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -27
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object Button2: TButton
      Left = 798
      Top = 16
      Width = 75
      Height = 41
      Caption = 'Dim'
      TabOrder = 2
      OnClick = Button2Click
    end
  end
  object GroupBox7: TGroupBox
    Left = 8
    Top = 400
    Width = 356
    Height = 204
    Caption = 'Matriz1'
    TabOrder = 7
    object Label3: TLabel
      Left = 216
      Top = 34
      Width = 56
      Height = 16
      Caption = 'N    x    M'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object StringGrid3: TStringGrid
      Left = 16
      Top = 17
      Width = 169
      Height = 169
      DefaultColWidth = 30
      DefaultRowHeight = 30
      FixedCols = 0
      FixedRows = 0
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      TabOrder = 0
    end
    object Edit6: TEdit
      Left = 216
      Top = 56
      Width = 26
      Height = 21
      TabOrder = 1
    end
    object Edit7: TEdit
      Left = 248
      Top = 56
      Width = 26
      Height = 21
      TabOrder = 2
    end
    object Button4: TButton
      Left = 216
      Top = 96
      Width = 58
      Height = 25
      Caption = 'Dim'
      TabOrder = 3
      OnClick = Button4Click
    end
  end
  object GroupBox8: TGroupBox
    Left = 8
    Top = 319
    Width = 889
    Height = 75
    Caption = 'Vector2'
    TabOrder = 8
    object StringGrid2: TStringGrid
      Left = 16
      Top = 17
      Width = 705
      Height = 40
      FixedCols = 0
      RowCount = 1
      FixedRows = 0
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      TabOrder = 0
    end
    object Edit5: TEdit
      Left = 727
      Top = 16
      Width = 65
      Height = 41
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -27
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object Button3: TButton
      Left = 798
      Top = 16
      Width = 75
      Height = 41
      Caption = 'Dim'
      TabOrder = 2
      OnClick = Button3Click
    end
  end
  object GroupBox9: TGroupBox
    Left = 370
    Top = 400
    Width = 352
    Height = 204
    Caption = 'Matriz2'
    TabOrder = 9
    object Label4: TLabel
      Left = 224
      Top = 42
      Width = 56
      Height = 16
      Caption = 'N    x    M'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object StringGrid4: TStringGrid
      Left = 16
      Top = 17
      Width = 169
      Height = 169
      DefaultColWidth = 30
      DefaultRowHeight = 30
      FixedCols = 0
      FixedRows = 0
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      TabOrder = 0
    end
    object Edit8: TEdit
      Left = 224
      Top = 64
      Width = 26
      Height = 21
      TabOrder = 1
    end
    object Edit9: TEdit
      Left = 256
      Top = 64
      Width = 26
      Height = 21
      TabOrder = 2
    end
    object Button5: TButton
      Left = 224
      Top = 104
      Width = 58
      Height = 25
      Caption = 'Dim'
      TabOrder = 3
      OnClick = Button5Click
    end
  end
  object GroupBox10: TGroupBox
    Left = 8
    Top = 8
    Width = 889
    Height = 105
    TabOrder = 10
    object Label5: TLabel
      Left = 50
      Top = 16
      Width = 170
      Height = 16
      Caption = 'Informacion sobre el ejercicio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
    object Natural1: TMenuItem
      Caption = 'Natural'
      object cantidadDigitos1: TMenuItem
        Caption = 'cantidadDigitos'
        OnClick = cantidadDigitos1Click
      end
      object sumaDeDigitos1: TMenuItem
        Caption = 'sumaDeDigitos'
        OnClick = sumaDeDigitos1Click
      end
      object DigitoMayor1: TMenuItem
        Caption = 'DigitoMayor'
        OnClick = DigitoMayor1Click
      end
      object InvertirNumero1: TMenuItem
        Caption = 'InvertirNumero'
        OnClick = InvertirNumero1Click
      end
      object eliminarDigitosRepetidos1: TMenuItem
        Caption = 'eliminarDigitosRepetidos'
        OnClick = eliminarDigitosRepetidos1Click
      end
      object eliminarDigitoPosicion1: TMenuItem
        Caption = 'eliminarDigitoPosicion'
        OnClick = eliminarDigitoPosicion1Click
      end
      object intercambiarDigitos1: TMenuItem
        Caption = 'intercambiarDigitos'
        OnClick = intercambiarDigitos1Click
      end
      object esPrimo1: TMenuItem
        Caption = 'esPrimo'
        OnClick = esPrimo1Click
      end
      object ponerDigitoMayorAlFinal1: TMenuItem
        Caption = 'ponerDigitoMayorAlFinal'
        OnClick = ponerDigitoMayorAlFinal1Click
      end
      object serie11: TMenuItem
        Caption = 'serie1'
        OnClick = serie11Click
      end
      object estaOrdenadoAsc1: TMenuItem
        Caption = 'estaOrdenadoAsc'
        OnClick = estaOrdenadoAsc1Click
      end
    end
    object Cadena1: TMenuItem
      Caption = 'Cadena'
      object ContarPalabras1: TMenuItem
        Caption = 'ContarPalabras'
        OnClick = ContarPalabras1Click
      end
    end
    object Vector1: TMenuItem
      Caption = 'Vector'
      object OrdenarVector1: TMenuItem
        Caption = 'OrdenarVector'
        OnClick = OrdenarVector1Click
      end
      object OrdenarVectorRango1: TMenuItem
        Caption = 'OrdenarVectorRango'
        OnClick = OrdenarVectorRango1Click
      end
    end
    object Matriz1: TMenuItem
      Caption = 'Matriz'
    end
  end
end
