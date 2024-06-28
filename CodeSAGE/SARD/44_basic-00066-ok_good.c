int main(int argc, char *argv[])
{
 char VAR1[10];
 if (sizeof VAR1 > 9 + 1)
 {
 return 0;
 }
 VAR1[9] = '';
 return 0;
}
