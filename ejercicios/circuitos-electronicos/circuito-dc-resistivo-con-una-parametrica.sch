<Qucs Schematic 1.1.0>
<Properties>
  <View=0,0,855,800,1,0,0>
  <Grid=10,10,1>
  <DataSet=circuito-dc-resistivo-con-una-parametrica.dat>
  <DataDisplay=circuito-dc-resistivo-con-una-parametrica.dpl>
  <OpenDisplay=1>
  <Script=circuito-dc-resistivo-con-una-parametrica.m>
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
  <Vdc V1 1 230 260 18 -26 0 1 "1 V" 1>
  <GND * 1 230 380 0 0 0 0>
  <R R1 1 450 200 15 -26 0 1 "1 k" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <R R2 1 450 300 15 -26 0 1 "Rv" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <.DC DC1 1 670 200 0 39 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <.SW SW1 1 670 310 0 63 0 0 "DC1" 1 "lin" 1 "Rv" 1 "100" 1 "5k" 1 "101" 1 "false" 0>
</Components>
<Wires>
  <230 170 230 230 "" 0 0 0 "">
  <230 170 450 170 "" 0 0 0 "">
  <450 230 450 270 "" 0 0 0 "">
  <450 330 450 340 "" 0 0 0 "">
  <230 340 450 340 "" 0 0 0 "">
  <230 290 230 340 "" 0 0 0 "">
  <230 340 230 380 "" 0 0 0 "">
  <450 270 450 270 "Vo" 480 240 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
