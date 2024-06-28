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
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = FUN6(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN7(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 break;
 default:
 FUN9("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN9("");
 break;
 default:
 if( VAR2 != 0 )
 {
 FUN10(100 / VAR2);
 }
 else
 {
 FUN9("");
 }
 break;
 }
}
static void FUN11()
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
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = FUN6(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN7(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 break;
 default:
 FUN9("");
 break;
 }
 switch(7)
 {
 case 7:
 if( VAR2 != 0 )
 {
 FUN10(100 / VAR2);
 }
 else
 {
 FUN9("");
 }
 break;
 default:
 FUN9("");
 break;
 }
}
static void FUN12()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN9("");
 break;
 default:
 VAR2 = 7;
 break;
 }
 switch(7)
 {
 case 7:
 FUN10(100 / VAR2);
 break;
 default:
 FUN9("");
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
 VAR2 = 7;
 break;
 default:
 FUN9("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN10(100 / VAR2);
 break;
 default:
 FUN9("");
 break;
 }
}
void FUN14()
{
 FUN1();
 FUN11();
 FUN12();
 FUN13();
}
#endif
