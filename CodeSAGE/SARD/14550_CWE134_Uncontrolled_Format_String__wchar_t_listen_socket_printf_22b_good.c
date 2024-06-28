#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(wchar_t * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 FUN3(VAR6"", VAR5);
 }
}
void FUN4(wchar_t * VAR5)
{
 if(VAR3)
 {
 FUN3(VAR6"", VAR5);
 }
}
void FUN5(wchar_t * VAR5)
{
 if(VAR4)
 {
 FUN3(VAR5);
 }
}
#endif
