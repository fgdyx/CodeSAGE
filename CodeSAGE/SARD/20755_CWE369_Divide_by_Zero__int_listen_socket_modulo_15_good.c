#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 SOCKET VAR10 = VAR9;
 char VAR11[VAR12];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR14, VAR15, VAR16);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR17 = VAR14;
 VAR7.VAR18.VAR19 = VAR20;
 VAR7.VAR21 = FUN4(VAR22);
 if (FUN5(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
 {
 break;
 }
 if (FUN6(VAR8, VAR25) == VAR24)
 {
 break;
 }
 VAR10 = FUN7(VAR8, NULL, NULL);
 if (VAR10 == VAR24)
 {
 break;
 }
 VAR6 = recv(VAR10, VAR11, VAR12 - 1, 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR11[VAR6] = '';
 VAR2 = FUN8(VAR11);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN9(VAR8);
 }
 if (VAR10 != VAR9)
 {
 FUN9(VAR10);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN10();
 }
#endif
 }
 break;
 default:
 FUN11("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN11("");
 break;
 default:
 if( VAR2 != 0 )
 {
 FUN12(100 % VAR2);
 }
 else
 {
 FUN11("");
 }
 break;
 }
}
static void FUN13()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 SOCKET VAR10 = VAR9;
 char VAR11[VAR12];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR14, VAR15, VAR16);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR17 = VAR14;
 VAR7.VAR18.VAR19 = VAR20;
 VAR7.VAR21 = FUN4(VAR22);
 if (FUN5(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
 {
 break;
 }
 if (FUN6(VAR8, VAR25) == VAR24)
 {
 break;
 }
 VAR10 = FUN7(VAR8, NULL, NULL);
 if (VAR10 == VAR24)
 {
 break;
 }
 VAR6 = recv(VAR10, VAR11, VAR12 - 1, 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR11[VAR6] = '';
 VAR2 = FUN8(VAR11);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN9(VAR8);
 }
 if (VAR10 != VAR9)
 {
 FUN9(VAR10);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN10();
 }
#endif
 }
 break;
 default:
 FUN11("");
 break;
 }
 switch(7)
 {
 case 7:
 if( VAR2 != 0 )
 {
 FUN12(100 % VAR2);
 }
 else
 {
 FUN11("");
 }
 break;
 default:
 FUN11("");
 break;
 }
}
static void FUN14()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN11("");
 break;
 default:
 VAR2 = 7;
 break;
 }
 switch(7)
 {
 case 7:
 FUN12(100 % VAR2);
 break;
 default:
 FUN11("");
 break;
 }
}
static void FUN15()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = 7;
 break;
 default:
 FUN11("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN12(100 % VAR2);
 break;
 default:
 FUN11("");
 break;
 }
}
void FUN16()
{
 FUN1();
 FUN13();
 FUN14();
 FUN15();
}
#endif
