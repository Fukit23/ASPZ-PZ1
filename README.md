# Практична робота №1
В цій інструкції буде показано як правильно завантажити ubuntu на віртуальну машину.
## Завантаження
Є дві програми для використання віртуальних машин: Oracle VM VirtualBox(безкоштовна) та VMware Workstation Pro(треба платити).

Для завантаження Oracle VM VirtualBox треба перейти на офіційний [сайт](https://www.virtualbox.org/) та завантажити останню версію для совєї операційної системи. Після цього відкрити файл та виконати процедуру завантаження за інструкцією завантажуючи все що там рекомендовано.

Для завантаження VMware Workstation Pro можна перейти на офіційний [сайт](https://www.vmware.com/products/desktop-hypervisor/workstation-and-fusion) та завантажити останню версію для совєї операційної системи ~~(якщо нема куди витрачати гроші)~~. Або якщо ви не боїтесь завантажувати піратьскі файли то можете перейти по [ссилці](https://rutracker.net/forum/viewtopic.php?t=6492639) та завантажити торрент файл. Там буде три ехе файли: 

<img width="315" height="88" alt="image" src="https://github.com/user-attachments/assets/ff096f70-ab2c-4313-a0b5-e002f16f640d" />

Для завантаження самої программи треба відкрити "VMware-workstation..." та виконати процедуру завантаження за інструкцією завантажуючи все що там рекомендовано. Після цього коли ви відкриєте програму вона запросить ключ програми. Для того щоб його отримати треба відкрити "VMKeygen.exe" вибрати версію програми та натиснути згенерувати, після цього ключ скопіювати та вставити у віконце запросу ключа.

Для завантаження самої системи ubuntu треба перейти на офіційний [сайт](https://ubuntu.com/download/server) та завантажити останню LTS(LTS розшифровується як довгострокова підтримка, що означає п'ять років безкоштовних оновлень безпеки та технічного обслуговування) версію Ubuntu server.

## Налаштування віртуальної машини
Налаштування буде показано на прикладі VMware Workstation Pro, для Oracle VM VirtualBox треба обирати аналогічні налаштування.

Після запуску треба обрати: File > New Virtual Machine

<img width="278" height="52" alt="image" src="https://github.com/user-attachments/assets/1e49fd76-c13a-494e-ad29-d9455d57db7b" />

В відкритому вікні обрати рекомендовану конфігурацію

<img width="421" height="424" alt="image" src="https://github.com/user-attachments/assets/4be5d365-0352-4272-a782-ba3a7e6d6694" />

Далі обрати ico файл для Ubuntu server який ми завантажували раніше

<img width="422" height="421" alt="image" src="https://github.com/user-attachments/assets/39ad6d96-7c3d-45bc-bb97-abb552b6726d" />

Після цього обрати місце зберігання та кількість виділеного місця

<img width="427" height="420" alt="image" src="https://github.com/user-attachments/assets/de567fcd-ac46-49ec-b256-37d65b8f3ac5" /> <img width="423" height="419" alt="image" src="https://github.com/user-attachments/assets/0e79e974-b74c-42cb-9110-6df0b47158fd" />

Потім воно покаже налаштування з якими воно буде завантажувати систему, там же можна змінити. Можете налаштувати це самі під свій пк але краще використовувати ці налаштуванні, їх вистачить з головою:

<img width="383" height="152" alt="image" src="https://github.com/user-attachments/assets/7e5f8dc7-71b5-4992-a873-7a346c6c046c" />

Коли ви натисните "завершити" воно одразу запусте віртуальну машину. Одразу відкриється віконце:

<img width="702" height="397" alt="image" src="https://github.com/user-attachments/assets/902a37cd-10cb-44b9-8d5c-59199bce20a6" />

Тут треба вибрати перший пункт та дочекатеться завантаження.

Після цього відкриється вікно вибору мови, краще вибрати англійску бо воно може потім жалітися якщо щось інше обрати.

<img width="1207" height="547" alt="image" src="https://github.com/user-attachments/assets/1b87c6c5-5199-4e61-9649-63b80cf20ec7" />

В наступному вікні ми нічого не чіпаємо та ідемо далі:

<img width="1245" height="780" alt="image" src="https://github.com/user-attachments/assets/2ca1953c-612f-4588-aaad-e5089270a805" />

Тут можна перевірити підключення:

<img width="1271" height="782" alt="image" src="https://github.com/user-attachments/assets/c77786e0-381b-4914-ad2a-d224cf60320d" />

Якщо вам треба налаштовувати проксі сервер то тут можна його налаштувати:

<img width="1266" height="784" alt="image" src="https://github.com/user-attachments/assets/2c7403e3-908f-4732-93d6-b66a6257f69d" />

Далі воно підключется до сервера завантажування який вам краще всього підійде:

<img width="1232" height="776" alt="image" src="https://github.com/user-attachments/assets/f191e8fa-1bd9-42e4-af49-d85d0d070f03" />

Тут нічого не змінюємо:

<img width="1253" height="778" alt="image" src="https://github.com/user-attachments/assets/5a5ca833-9aa0-4e81-b88a-5aa502eb02f7" />

Далі можна подивитися конфігурацію, та якщо що - змінити. Якщо при натисненні "далі" воно буде на щось жалітися - пропускайте, нічого страшного не буде.

Потім треба буде зробити профіль 

<img width="1203" height="640" alt="image" src="https://github.com/user-attachments/assets/812e67f2-4fbc-49e2-ac12-ae47d343f53b" />

> [!WARNING]
> Запишіть десь дані вашого профілю щоб не забути їх







