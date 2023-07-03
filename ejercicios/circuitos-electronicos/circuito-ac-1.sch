<Qucs Schematic 1.1.0>
<Properties>
  <View=0,31,800,800,1,0,0>
  <Grid=10,10,1>
  <DataSet=circuito-ac-1.dat>
  <DataDisplay=circuito-ac-1.dpl>
  <OpenDisplay=1>
  <Script=circuito-ac-1.m>
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
  <Vac V1 1 260 240 18 -26 0 1 "1 V" 1 "1 kHz" 0 "0" 0 "0" 0>
  <L L1 1 390 310 -26 10 0 0 "1 mH" 1 "" 0>
  <GND * 1 260 360 0 0 0 0>
  <R R1 1 440 240 15 -26 0 1 "50 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <C C1 1 390 170 -26 17 0 0 "1 uF" 1 "" 0 "neutral" 0>
  <.AC AC1 1 570 190 0 39 0 0 "log" 1 "1 kHz" 1 "10 MHz" 1 "121" 1 "no" 0>
  <NutmegEq NutmegEq1 1 610 360 -28 16 0 0 "ac" 1 "Z=-1/V1.i" 1>
</Components>
<Wires>
  <420 170 440 170 "" 0 0 0 "">
  <440 170 440 210 "" 0 0 0 "">
  <440 270 440 310 "" 0 0 0 "">
  <420 310 440 310 "" 0 0 0 "">
  <260 270 260 310 "" 0 0 0 "">
  <260 310 260 360 "" 0 0 0 "">
  <260 310 360 310 "" 0 0 0 "">
  <260 170 260 210 "" 0 0 0 "">
  <260 170 360 170 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
