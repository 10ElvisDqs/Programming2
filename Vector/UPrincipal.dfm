﻿object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 323
  ClientWidth = 644
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
  object Label1: TLabel
    Left = 56
    Top = 24
    Width = 31
    Height = 13
    Caption = 'Vector'
  end
  object Label2: TLabel
    Left = 56
    Top = 88
    Width = 38
    Height = 13
    Caption = 'Tama'#241'o'
  end
  object Label3: TLabel
    Left = 56
    Top = 144
    Width = 48
    Height = 13
    Caption = 'Resultado'
  end
  object Label4: TLabel
    Left = 256
    Top = 87
    Width = 44
    Height = 13
    Caption = 'Elemento'
  end
  object Label5: TLabel
    Left = 344
    Top = 88
    Width = 38
    Height = 13
    Caption = 'Posici'#243'n'
  end
  object Label6: TLabel
    Left = 256
    Top = 128
    Width = 53
    Height = 13
    Caption = 'Elemento 2'
  end
  object Label7: TLabel
    Left = 488
    Top = 208
    Width = 31
    Height = 13
    Caption = 'Rango'
  end
  object SGVector: TStringGrid
    Left = 56
    Top = 40
    Width = 497
    Height = 41
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 0
  end
  object ETamaño: TEdit
    Left = 56
    Top = 103
    Width = 73
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 135
    Top = 101
    Width = 90
    Height = 25
    Caption = 'Asignar Tama'#241'o'
    TabOrder = 2
    OnClick = Button1Click
  end
  object EResultado: TEdit
    Left = 56
    Top = 163
    Width = 169
    Height = 21
    TabOrder = 3
  end
  object EElem: TEdit
    Left = 256
    Top = 106
    Width = 65
    Height = 21
    TabOrder = 4
  end
  object EPos: TEdit
    Left = 344
    Top = 103
    Width = 65
    Height = 21
    TabOrder = 5
  end
  object Button2: TButton
    Left = 40
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Examen1'
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 150
    Top = 248
    Width = 75
    Height = 25
    Caption = 'Examen2'
    TabOrder = 7
    OnClick = Button3Click
  end
  object EElem2: TEdit
    Left = 256
    Top = 147
    Width = 65
    Height = 21
    TabOrder = 8
  end
  object Pos1: TEdit
    Left = 480
    Top = 240
    Width = 25
    Height = 21
    TabOrder = 9
  end
  object Pos2: TEdit
    Left = 511
    Top = 240
    Width = 26
    Height = 21
    TabOrder = 10
  end
  object Button4: TButton
    Left = 272
    Top = 256
    Width = 75
    Height = 25
    Caption = 'Button4'
    TabOrder = 11
    OnClick = Button4Click
  end
  object MainMenu1: TMainMenu
    Left = 400
    Top = 152
    object Funciones1: TMenuItem
      Caption = 'Funciones'
      object ContarElementos1: TMenuItem
        Caption = 'Contar Elementos'
        OnClick = ContarElementos1Click
      end
      object SumarElementos1: TMenuItem
        Caption = 'Sumar Elementos'
        OnClick = SumarElementos1Click
      end
      object Bsquedas1: TMenuItem
        Caption = 'B'#250'squedas'
        object Secuencial1: TMenuItem
          Caption = 'Secuencial'
          OnClick = Secuencial1Click
        end
        object Binaria1: TMenuItem
          Caption = 'Binaria'
          OnClick = Binaria1Click
        end
      end
    end
    object Procedimientos1: TMenuItem
      Caption = 'Procedimientos'
      object EliminarElem1: TMenuItem
        Caption = 'Eliminar Elemento'
        OnClick = EliminarElem1Click
      end
      object InsertarElemento1: TMenuItem
        Caption = 'Insertar Elemento'
        OnClick = InsertarElemento1Click
      end
      object LlenarVector1: TMenuItem
        Caption = 'Llenar Vector'
        OnClick = LlenarVector1Click
      end
      object DibujarVector1: TMenuItem
        Caption = 'Dibujar Vector'
        OnClick = DibujarVector1Click
      end
      object Ordenar1: TMenuItem
        Caption = 'Ordenar'
        object Intercambio1: TMenuItem
          Caption = 'Intercambio'
          OnClick = Intercambio1Click
        end
        object Burbuja1: TMenuItem
          Caption = 'Burbuja'
          OnClick = Burbuja1Click
        end
        object Shell1: TMenuItem
          Caption = 'Shell'
          OnClick = Shell1Click
        end
        object QuickSort1: TMenuItem
          Caption = 'Quick Sort'
          OnClick = QuickSort1Click
        end
      end
      object intercalarPareseImpares1: TMenuItem
        Caption = 'intercalar Pares e Impares'
        OnClick = intercalarPareseImpares1Click
      end
    end
    object Recursivo1: TMenuItem
      Caption = 'Recursivo'
      object ContarElemento1: TMenuItem
        Caption = 'Contar Elemento'
        OnClick = ContarElemento1Click
      end
      object EleminarElemento1: TMenuItem
        Caption = 'Eleminar Elemento'
        OnClick = EleminarElemento1Click
      end
      object SumarElementos2: TMenuItem
        Caption = 'Sumar Elementos'
        OnClick = SumarElementos2Click
      end
      object InsertarElemento2: TMenuItem
        Caption = 'Insertar Elemento'
        OnClick = InsertarElemento2Click
      end
      object Bsquedas2: TMenuItem
        Caption = 'B'#250'squedas'
        object Secuencial2: TMenuItem
          Caption = 'Secuencial'
          OnClick = Secuencial2Click
        end
        object Binaria2: TMenuItem
          Caption = 'Binaria'
          OnClick = Binaria2Click
        end
      end
    end
    object Practico1: TMenuItem
      Caption = 'Practico'
      object Practico2: TMenuItem
        Caption = 'Eliminar los Elemntos Primos del Vector'
        OnClick = Practico2Click
      end
      object VoltearlosElementosdelVectos1: TMenuItem
        Caption = 'Voltear los Elementos del Vectos'
        OnClick = VoltearlosElementosdelVectos1Click
      end
      object ElementoMayor1: TMenuItem
        Caption = 'Elemento Mayor'
        OnClick = ElementoMayor1Click
      end
      object ElementoRepit1: TMenuItem
        Caption = 'Elemento Repit'
        OnClick = ElementoRepit1Click
      end
      object Eliminarmultiplodenum1: TMenuItem
        Caption = 'Eliminar multiplo de num'
        OnClick = Eliminarmultiplodenum1Click
      end
      object IntercalarPareseImpares2: TMenuItem
        Caption = 'Intercalar Pares e Impares'
        OnClick = IntercalarPareseImpares2Click
      end
      object EstaOrdenado1: TMenuItem
        Caption = 'Esta Ordenado'
        OnClick = EstaOrdenado1Click
      end
      object Reemplazar1: TMenuItem
        Caption = 'Reemplazar '
        OnClick = Reemplazar1Click
      end
      object EliminarElemRepit1: TMenuItem
        Caption = 'Eliminar Elem Repit'
        OnClick = EliminarElemRepit1Click
      end
      object EliminarDentrodelRango1: TMenuItem
        Caption = 'Eliminar Dentro del Rango'
        OnClick = EliminarDentrodelRango1Click
      end
    end
  end
end
