object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Numero Natural Auxiliar Elvis David Quinteros Siles'
  ClientHeight = 272
  ClientWidth = 520
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 16
    Width = 75
    Height = 13
    Caption = 'N'#250'mero Natural'
  end
  object Label2: TLabel
    Left = 40
    Top = 112
    Width = 48
    Height = 13
    Caption = 'Resultado'
  end
  object Label3: TLabel
    Left = 232
    Top = 16
    Width = 17
    Height = 13
    Caption = 'Pos'
  end
  object Label4: TLabel
    Left = 320
    Top = 16
    Width = 15
    Height = 13
    Caption = 'Dig'
  end
  object Label5: TLabel
    Left = 232
    Top = 59
    Width = 23
    Height = 13
    Caption = 'Pos1'
  end
  object Label6: TLabel
    Left = 320
    Top = 59
    Width = 23
    Height = 13
    Caption = 'Pos2'
  end
  object Label7: TLabel
    Left = 407
    Top = 16
    Width = 21
    Height = 13
    Caption = 'Dig1'
  end
  object ENumero: TEdit
    Left = 40
    Top = 32
    Width = 171
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 136
    Top = 59
    Width = 75
    Height = 25
    Cursor = crHandPoint
    Caption = 'Get N'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 40
    Top = 59
    Width = 75
    Height = 25
    Cursor = crHandPoint
    Caption = 'Set N'
    TabOrder = 2
    OnClick = Button2Click
  end
  object EResultado: TEdit
    Left = 40
    Top = 131
    Width = 171
    Height = 21
    TabOrder = 3
  end
  object Button3: TButton
    Left = 232
    Top = 100
    Width = 125
    Height = 25
    Cursor = crHandPoint
    Caption = 'Contar Digitos'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 232
    Top = 131
    Width = 125
    Height = 25
    Cursor = crHandPoint
    Caption = 'Eliminar D'#237'gitos'
    TabOrder = 5
    OnClick = Button4Click
  end
  object EPos: TEdit
    Left = 232
    Top = 32
    Width = 65
    Height = 21
    TabOrder = 6
  end
  object Button5: TButton
    Left = 363
    Top = 100
    Width = 122
    Height = 25
    Cursor = crHandPoint
    Caption = 'Factorial'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 363
    Top = 131
    Width = 122
    Height = 25
    Cursor = crHandPoint
    Caption = 'Eliminar Dig Par'
    TabOrder = 8
    OnClick = Button6Click
  end
  object EDig: TEdit
    Left = 319
    Top = 32
    Width = 66
    Height = 21
    TabOrder = 9
  end
  object Button7: TButton
    Left = 232
    Top = 162
    Width = 126
    Height = 25
    Cursor = crHandPoint
    Caption = 'Insertar Digito'
    TabOrder = 10
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 363
    Top = 162
    Width = 122
    Height = 25
    Cursor = crHandPoint
    Caption = 'Voltear'
    TabOrder = 11
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 232
    Top = 193
    Width = 125
    Height = 25
    Cursor = crHandPoint
    Caption = 'Devolver Dig Pos'
    TabOrder = 12
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 364
    Top = 193
    Width = 121
    Height = 25
    Cursor = crHandPoint
    Caption = 'Intercambiar Dig Pos'
    TabOrder = 13
    OnClick = Button10Click
  end
  object EPos1: TEdit
    Left = 232
    Top = 73
    Width = 65
    Height = 21
    TabOrder = 14
  end
  object EPos2: TEdit
    Left = 319
    Top = 73
    Width = 66
    Height = 21
    TabOrder = 15
  end
  object Button11: TButton
    Left = 232
    Top = 224
    Width = 126
    Height = 25
    Cursor = crHandPoint
    Caption = 'Devolver Num Rango'
    TabOrder = 16
    OnClick = Button11Click
  end
  object EDig1: TEdit
    Left = 407
    Top = 32
    Width = 65
    Height = 21
    TabOrder = 17
  end
  object MainMenu1: TMainMenu
    object Practico1: TMenuItem
      Caption = 'Practico'
      object Factorial1: TMenuItem
        Caption = 'Factorial'
        OnClick = Factorial1Click
      end
      object ContarDigitosPares1: TMenuItem
        Caption = 'Contar Digitos Pares'
        OnClick = ContarDigitosPares1Click
      end
      object EliminarDigImpares1: TMenuItem
        Caption = 'Eliminar Dig Impares'
        OnClick = EliminarDigImpares1Click
      end
      object SumarDigPrimos1: TMenuItem
        Caption = 'Sumar Dig Primos'
        OnClick = SumarDigPrimos1Click
      end
      object DigMayor1: TMenuItem
        Caption = 'Dig Mayor'
        OnClick = DigMayor1Click
      end
      object VerificarsielDigseescunetra1: TMenuItem
        Caption = 'Verificar si el Dig se encuentra'
      end
      object EsPerfecto1: TMenuItem
        Caption = 'Es Perfecto'
        OnClick = EsPerfecto1Click
      end
      object EliminarDentrodelRango1: TMenuItem
        Caption = 'Eliminar Dentro del Rango'
        OnClick = EliminarDentrodelRango1Click
      end
      object EliminarDigIguales1: TMenuItem
        Caption = 'Eliminar Dig Iguales'
        OnClick = EliminarDigIguales1Click
      end
      object Reemplazar1: TMenuItem
        Caption = 'Reemplazar'
        OnClick = Reemplazar1Click
      end
      object DigitoquemasseRepite1: TMenuItem
        Caption = 'Digito que mas se Repite'
        OnClick = DigitoquemasseRepite1Click
      end
      object Intercambiar1: TMenuItem
        Caption = 'Intercambiar'
        OnClick = Intercambiar1Click
      end
    end
    object Conversiones1: TMenuItem
      Caption = 'Conversiones'
      object DecimalaOctal1: TMenuItem
        Caption = 'Decimal a Octal'
        OnClick = DecimalaOctal1Click
      end
    end
  end
end
