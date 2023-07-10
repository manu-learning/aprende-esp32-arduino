<Qucs Schematic 1.1.0>
<Properties>
  <View=166,146,1178,918,1.06888,0,0>
  <Grid=10,10,1>
  <DataSet=resistencia-para-un-led.dat>
  <DataDisplay=resistencia-para-un-led.dpl>
  <OpenDisplay=1>
  <Script=resistencia-para-un-led.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
</Symbol>
<Components>
  <Vdc V1 1 240 340 18 -26 0 1 "6 V" 1>
  <GND * 1 290 390 0 0 0 0>
  <Lib D3 1 510 240 16 -23 0 2 "LEDs" 0 "red" 0>
  <R R3 1 290 240 -26 -51 0 2 "222 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <Vdc V2 1 240 660 18 -26 0 1 "6 V" 1>
  <.DC DC2 1 400 750 0 40 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Lib D4 1 510 560 16 -23 0 2 "LEDs" 0 "red" 0>
  <R R4 1 290 560 -26 -51 0 2 "222 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <IProbe Pr1 1 590 650 -37 -26 0 3>
  <GND * 1 240 710 0 0 0 0>
  <.DC DC1 1 400 420 0 40 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
</Components>
<Wires>
  <240 370 240 390 "" 0 0 0 "">
  <240 390 290 390 "" 0 0 0 "">
  <240 240 240 310 "" 0 0 0 "">
  <240 240 260 240 "" 0 0 0 "">
  <320 240 480 240 "" 0 0 0 "">
  <540 240 590 240 "" 0 0 0 "">
  <590 240 590 390 "" 0 0 0 "">
  <290 390 590 390 "" 0 0 0 "">
  <240 690 240 710 "" 0 0 0 "">
  <240 710 590 710 "" 0 0 0 "">
  <240 560 240 630 "" 0 0 0 "">
  <240 560 260 560 "" 0 0 0 "">
  <320 560 480 560 "" 0 0 0 "">
  <540 560 590 560 "" 0 0 0 "">
  <590 560 590 620 "" 0 0 0 "">
  <590 680 590 710 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
