#ifndef VAR1
static void FUN1()
{
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t VAR2[150], VAR3[100];
 int VAR4;
 wmemset(VAR2, VAR5'', 149);
 VAR2[149] = VAR5'';
 for(VAR4=0; VAR4 < 99; VAR4++)
 {
 VAR3[VAR4] = VAR2[VAR4];
 }
 VAR3[99] = VAR5'';
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 if(5==5)
 {
 {
 wchar_t VAR2[150], VAR3[100];
 int VAR4;
 wmemset(VAR2, VAR5'', 149);
 VAR2[149] = VAR5'';
 for(VAR4=0; VAR4 < 99; VAR4++)
 {
 VAR3[VAR4] = VAR2[VAR4];
 }
 VAR3[99] = VAR5'';
 FUN3(VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
