#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t VAR3[150], VAR4[100];
 int VAR5;
 wmemset(VAR3, VAR6'', 149);
 VAR3[149] = VAR6'';
 for(VAR5=0; VAR5 < 99; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
 VAR4[99] = VAR6'';
 FUN3(VAR4);
 }
 }
}
static void FUN4()
{
 if(VAR2==5)
 {
 {
 wchar_t VAR3[150], VAR4[100];
 int VAR5;
 wmemset(VAR3, VAR6'', 149);
 VAR3[149] = VAR6'';
 for(VAR5=0; VAR5 < 99; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
 VAR4[99] = VAR6'';
 FUN3(VAR4);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
