#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3.VAR4>
#VAR2 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
namespace VAR8
{
VAR9::FUN2(char * VAR10)
{
 VAR11 = VAR10;
 strcat(VAR11, "");
}
VAR9::~FUN2()
{
 {
 VAR12* VAR13 = NULL;
 ULONG VAR14 = 0L;
 ULONG VAR15 = 0L;
 VAR16 *VAR17 = NULL;
 char VAR18[256];
 _snprintf(VAR18, 256-1, "", VAR11);
 VAR13 = FUN3("", VAR19);
 if (VAR13 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 VAR14 = FUN6(VAR13, NULL);
 if (VAR14 != VAR20)
 {
 FUN4("");
 FUN5(1);
 }
 VAR15 = FUN7(
 VAR13,
 "",
 VAR21,
 VAR18,
 NULL,
 0,
 NULL,
 NULL,
 VAR22,
 VAR22,
 &VAR17);
 if (VAR15 != VAR20)
 {
 FUN4("");
 if (VAR17 != NULL)
 {
 FUN8(VAR17);
 }
 FUN5(1);
 }
 if (VAR17 != NULL)
 {
 FUN8(VAR17);
 }
 FUN9(VAR13);
 }
}
}
#endif
