Zapis()
=============
Funkcja zapis() jako argument przyjmuje obiekt klasy *operacja*.
Służy ona do zapisu aktualnych danych do bazy (plików) użytkownika.

Wyróżniamy cztery typy operacji tej funkcji: 

.. code-block:: c++

    if(operacja.typ_operacji == "zapisz_kontakt")

Jeżeli typ operacji równy jest *zapisz_kontakt*, to plik kontakty.txt zostaje otwarty 
a następnie wszystkie pola z aktualnego obiektu z klasy *do_wykonania->kontakty* zostają 
w nim dopisane.

.. code-block:: c++

    else if(operacja.typ_operacji == "zapisz_saldo")

Jeżeli typ operacji równy jest *zapisz_saldo*, to plik saldo.txt zostaje otwarty 
a następnie wszystkie waluty z *obiektu->saldo* zostają zaktualizowane w pliku.


.. code-block:: c++

    else if(operacja.typ_operacji == "zapisz_historie")

Jeżeli typ operacji równy jest *zapisz_historie*, to plik kontakty.txt zostaje otwarty 
a następnie wszystkie pola z aktualnego obiektu z klasy *do_wykonania->historia* zostają 
w nim dopisane.


.. code-block:: c++

    else if(operacja.typ_operacji == "przelew zewnetrzny")

Jeżeli typ operacji równy jest *przelew zewnetrzny*, to plik przelewy_zewnetrzne.txt zostaje otwarty 
a następnie dopisane są do niego dane dotyczące przelewu na konto, które jest spoza naszego banku.