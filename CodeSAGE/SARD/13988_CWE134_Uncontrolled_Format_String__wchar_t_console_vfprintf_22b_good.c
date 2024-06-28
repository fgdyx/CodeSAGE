#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(wchar_t * VAR5, ...)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR8"", VAR6);
 FUN5(VAR6);
 }
 }
}
void FUN6(wchar_t * VAR5, ...)
{
 if(VAR3)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR8"", VAR6);
 FUN5(VAR6);
 }
 }
}
void FUN7(wchar_t * VAR5, ...)
{
 if(VAR4)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7, VAR5, VAR6);
 FUN5(VAR6);
 }
 }
}
#endif
