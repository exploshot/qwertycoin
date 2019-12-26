// Copyright (c) 2017-2018, Karbo developers
// Copyright (c) 2018-2019, The Qwertycoin developers

#pragma once

/*!
    \file Ukrainian.h

    \brief Ukrainian word list.
*/

#include <string>
#include <unordered_map>
#include <vector>
#include <Mnemonics/language_base.h>

namespace Language {

class Ukrainian : public Base
{
public:
    const static std::string c_name;

    Ukrainian() : Base(c_name, std::vector<std::string>({
        "абат",
        "абощо",
        "абсурд",
        "автор",
        "агов",
        "адепт",
        "азарт",
        "акцент",
        "алея",
        "альбом",
        "альфа",
        "амінь",
        "ананас",
        "ангар",
        "анкета",
        "апарат",
        "арена",
        "арешт",
        "аркуш",
        "армія",
        "аромат",
        "артист",
        "артіль",
        "арфа",
        "аршин",
        "атлас",
        "атож",
        "афіша",
        "бабай",
        "бабин",
        "бавити",
        "багач",
        "бажати",
        "балон",
        "банан",
        "банк",
        "бариня",
        "барліг",
        "бармен",
        "барон",
        "бачити",
        "баюра",
        "береза",
        "бидло",
        "билина",
        "бильце",
        "битва",
        "битий",
        "бичок",
        "благо",
        "бланк",
        "ближче",
        "блиск",
        "бляха",
        "блідий",
        "бодай",
        "болото",
        "болт",
        "бомба",
        "бора",
        "борт",
        "борщ",
        "босий",
        "боягуз",
        "боязко",
        "брань",
        "браття",
        "брижа",
        "бритва",
        "бронза",
        "брук",
        "брусок",
        "бувало",
        "будка",
        "будяк",
        "буква",
        "букет",
        "було",
        "бурка",
        "буряк",
        "бути",
        "буття",
        "буфет",
        "бухати",
        "бюст",
        "бігти",
        "бігцем",
        "бідняк",
        "бізнес",
        "бійка",
        "білан",
        "бісик",
        "вабити",
        "вада",
        "вага",
        "вадити",
        "важіль",
        "вазон",
        "валер",
        "валити",
        "валун",
        "вальс",
        "валюта",
        "валяти",
        "валіза",
        "вампір",
        "вантаж",
        "варкий",
        "васал",
        "ватага",
        "вахтер",
        "вбити",
        "вбік",
        "вверх",
        "ввесь",
        "вгорі",
        "вдало",
        "вдати",
        "вдвох",
        "вдень",
        "вдова",
        "вдома",
        "вдягти",
        "вельми",
        "вепр",
        "верета",
        "версія",
        "вертеп",
        "вершок",
        "весло",
        "весна",
        "вести",
        "весь",
        "вечеря",
        "вжити",
        "взвод",
        "взимку",
        "взнати",
        "взятий",
        "вибрик",
        "вигляд",
        "визиск",
        "вийти",
        "викрик",
        "вилиця",
        "вимити",
        "винен",
        "винний",
        "вираз",
        "вирій",
        "витати",
        "виток",
        "вихід",
        "вишити",
        "вишкіл",
        "вишня",
        "вищати",
        "вищий",
        "вкрай",
        "вкупі",
        "вмерти",
        "вміст",
        "вміти",
        "вниз",
        "вовчий",
        "вогкий",
        "вогонь",
        "вода",
        "водний",
        "вождь",
        "возний",
        "вокзал",
        "волох",
        "волхв",
        "воля",
        "ворог",
        "воша",
        "вперше",
        "вплив",
        "вправо",
        "врешті",
        "врожай",
        "всього",
        "всюди",
        "всякий",
        "втерти",
        "втома",
        "втрата",
        "втіха",
        "вузлик",
        "вуйко",
        "вулиця",
        "вулкан",
        "вусик",
        "вчора",
        "вщент",
        "віват",
        "відати",
        "відлік",
        "відсік",
        "відхід",
        "відьма",
        "війна",
        "вікно",
        "вікінг",
        "віник",
        "вінок",
        "віра",
        "віршик",
        "віск",
        "вість",
        "вісім",
        "вітер",
        "віхоть",
        "вішати",
        "віяти",
        "гадати",
        "гайда",
        "галузь",
        "ганити",
        "гаплик",
        "гаразд",
        "гарба",
        "гарно",
        "гарт",
        "гатити",
        "гвинт",
        "генрі",
        "геолог",
        "герб",
        "герць",
        "гиря",
        "гладко",
        "глас",
        "глек",
        "глечик",
        "глузд",
        "глухий",
        "гнаний",
        "гнида",
        "гнилий",
        "гнути",
        "гнівно",
        "гнідий",
        "гніздо",
        "гній",
        "годен",
        "година",
        "голка",
        "голота",
        "голуб",
        "гонець",
        "гонор",
        "гопак",
        "гордий",
        "горло",
        "горня",
        "горст",
        "горщик",
        "гостя",
        "готово",
        "градус",
        "грань",
        "грати",
        "граф",
        "грація",
        "гребти",
        "грек",
        "грець",
        "гречка",
        "грубо",
        "грудка",
        "грюкіт",
        "грітий",
        "гріх",
        "губка",
        "гудок",
        "гуляти",
        "гумка",
        "гурт",
        "гусар",
        "гуси",
        "гусінь",
        "гута",
        "гуцул",
        "гяур",
        "гідний",
        "гімн",
        "гіпс",
        "гіркий",
        "гірше",
        "давити",
        "далеко",
        "далі",
        "дамба",
        "дань",
        "дарма",
        "даром",
        "дата",
        "датися",
        "датчик",
        "дашок",
        "дверці",
        "двійка",
        "двір",
        "двічі",
        "дедалі",
        "декан",
        "демон",
        "депеша",
        "дерево",
        "дерти",
        "десь",
        "деякий",
        "деінде",
        "джаз",
        "джинси",
        "джип",
        "дзьоб",
        "дибати",
        "дивина",
        "дивний",
        "дикий",
        "димар",
        "динька",
        "дитя",
        "днище",
        "добро",
        "добір",
        "довбня",
        "довго",
        "доволі",
        "довший",
        "догляд",
        "додати",
        "додому",
        "дожити",
        "дозвіл",
        "доки",
        "докір",
        "долати",
        "долу",
        "доля",
        "дома",
        "донизу",
        "донька",
        "доня",
        "допіру",
        "дорога",
        "досвід",
        "дослід",
        "доста",
        "досі",
        "дотик",
        "дотла",
        "доторк",
        "доцент",
        "доїти",
        "друг",
        "друкар",
        "дрібно",
        "дуга",
        "дуже",
        "дужий",
        "дукач",
        "думка",
        "дурно",
        "дуріти",
        "дути",
        "душно",
        "дюна",
        "дядина",
        "дятел",
        "дідусь",
        "дійти",
        "ділити",
        "діра",
        "дірка",
        "дітися",
        "егоїзм",
        "едем",
        "екстаз",
        "екіпаж",
        "еліта",
        "етап",
        "етюд",
        "ефект",
        "ешелон",
        "жадоба",
        "жалоба",
        "жаль",
        "жанр",
        "жахати",
        "жахний",
        "жваво",
        "жереб",
        "жертва",
        "жест",
        "живити",
        "живо",
        "жилка",
        "житися",
        "житло",
        "житній",
        "життя",
        "жменя",
        "жмут",
        "жнець",
        "жнива",
        "жовнір",
        "жовтий",
        "жовч",
        "жолоб",
        "жолудь",
        "жрець",
        "жупан",
        "журба",
        "журнал",
        "жучок",
        "жінка",
        "забити",
        "завити",
        "загал",
        "загс",
        "задати",
        "задля",
        "задній",
        "задом",
        "зажити",
        "зайвий",
        "закон",
        "закрут",
        "зала",
        "замет",
        "заміж",
        "заново",
        "заодно",
        "заочно",
        "запах",
        "запона",
        "засув",
        "зась",
        "затято",
        "захист",
        "зачати",
        "зашити",
        "заячий",
        "заєць",
        "збирач",
        "збити",
        "зблиск",
        "збоку",
        "зброя",
        "збіжжя",
        "збір",
        "звання",
        "звити",
        "звичай",
        "зворот",
        "звідти",
        "звір",
        "згаяти",
        "згоден",
        "здати",
        "здоров",
        "земля",
        "зигзаг",
        "зима",
        "зимний",
        "зиск",
        "зйомка",
        "злам",
        "злегка",
        "злий",
        "зліва",
        "злізти",
        "злість",
        "зліт",
        "змити",
        "змога",
        "змійка",
        "зміст",
        "знайда",
        "знання",
        "знову",
        "знятий",
        "зовні",
        "зозуля",
        "зойк",
        "зонд",
        "зорити",
        "зоря",
        "зоріти",
        "зроду",
        "зрідка",
        "зубок",
        "зуміти",
        "зілля",
        "ймення",
        "йолоп",
        "кабан",
        "каблук",
        "казан",
        "казино",
        "какао",
        "кала",
        "калина",
        "калоша",
        "калюжа",
        "канава",
        "канчук",
        "капець",
        "капище",
        "капітан",
        "карась",
        "карета",
        "карта",
        "касета",
        "касир",
        "каска",
        "катати",
        "качан",
        "каша",
        "кашель",
        "кашкет",
        "каяття",
        "каїн",
        "квач",
        "кваша",
        "кволо",
        "кедр",
        "кейс",
        "келих",
        "кефір",
        "кийок",
        "килим",
        "кирея",
        "кирка",
        "кисень",
        "кисло",
        "кисіль",
        "киця",
        "кишеня",
        "кишка",
        "кишіти",
        "клепка",
        "клин",
        "клон",
        "клоун",
        "клубок",
        "клунок",
        "ключ",
        "кліть",
        "книжка",
        "князь",
        "кобура",
        "коваль",
        "ковила",
        "ковпак",
        "ковчег",
        "кодекс",
        "кожух",
        "козеня",
        "козир",
        "козуб",
        "коледж",
        "колиба",
        "колоти",
        "коліно",
        "комаха",
        "комод",
        "конати",
        "конче",
        "конюх",
        "коняка",
        "кора",
        "коржик",
        "корона",
        "корпус",
        "корчма",
        "коса",
        "косий",
        "косяк",
        "котел",
        "котик",
        "котрий",
        "котяра",
        "кофта",
        "кохати",
        "коцюба",
        "кошик",
        "кошт",
        "крадій",
        "краля",
        "крам",
        "кран",
        "кратер",
        "кращий",
        "країна",
        "кредит",
        "крем",
        "кривда",
        "криза",
        "крити",
        "криця",
        "кролик",
        "кругом",
        "крук",
        "кряж",
        "крісло",
        "кубик",
        "кубло",
        "кузина",
        "кузня",
        "кукіль",
        "культ",
        "кума",
        "куна",
        "куняти",
        "купе",
        "купчик",
        "курган",
        "кури",
        "курний",
        "курява",
        "кусник",
        "кутик",
        "кутя",
        "кухоль",
        "кушнір",
        "кшталт",
        "кілер",
        "кіль",
        "кінець",
        "кінчик",
        "кінь",
        "кіоск",
        "кіска",
        "кістка",
        "кітель",
        "кішка",
        "лабети",
        "лава",
        "лавиця",
        "лагуна",
        "ладо",
        "лазити",
        "лазня",
        "ламати",
        "лантух",
        "лапа",
        "лапка",
        "ласка",
        "ласощі",
        "левада",
        "легко",
        "легіон",
        "ледар",
        "ледь",
        "лежак",
        "лезо",
        "лекція",
        "леле",
        "лемент",
        "летіти",
        "лижа",
        "линва",
        "линути",
        "липень",
        "лисиця",
        "лист",
        "литвин",
        "литися",
        "лихий",
        "лицар",
        "лице",
        "личина",
        "личко",
        "лишати",
        "лишити",
        "лобода",
        "логіка",
        "лоза",
        "лозина",
        "лозунг",
        "лопух",
        "лоро",
        "лунати",
        "лупати",
        "луска",
        "льон",
        "любов",
        "любчик",
        "людний",
        "люлька",
        "люто",
        "лягати",
        "ляда",
        "лячно",
        "ліана",
        "лігво",
        "ліжко",
        "ліки",
        "лікоть",
        "лілея",
        "лінь",
        "ліпити",
        "ліпший",
        "ліра",
        "ліса",
        "лісник",
        "літати",
        "літо",
        "лічити",
        "мабуть",
        "магнат",
        "мадам",
        "мазепа",
        "мазур",
        "майдан",
        "майже",
        "майка",
        "майно",
        "майя",
        "маклер",
        "максим",
        "макуха",
        "мальва",
        "малюк",
        "маліти",
        "мандри",
        "маневр",
        "мантія",
        "мара",
        "марка",
        "мармур",
        "марний",
        "марс",
        "марш",
        "масаж",
        "масний",
        "масово",
        "мастак",
        "матка",
        "матуся",
        "мафія",
        "махом",
        "машина",
        "маячня",
        "маєток",
        "медик",
        "медуза",
        "межа",
        "менш",
        "меню",
        "мерщій",
        "мести",
        "месія",
        "мета",
        "метеор",
        "меткий",
        "метод",
        "мечеть",
        "минати",
        "минути",
        "мирний",
        "миро",
        "миска",
        "мисль",
        "мити",
        "митра",
        "миттю",
        "миша",
        "млин",
        "млосно",
        "мляво",
        "мліти",
        "мовби",
        "мовний",
        "могти",
        "мода",
        "модний",
        "модуль",
        "мокро",
        "молоти",
        "монгол",
        "мораль",
        "морг",
        "морок",
        "мотати",
        "мотив",
        "мотор",
        "мотуз",
        "мощі",
        "мрець",
        "мрія",
        "мстити",
        "мудро",
        "мужньо",
        "муляти",
        "мураха",
        "мутний",
        "муха",
        "мушка",
        "мчати",
        "мідь",
        "мікроб",
        "мілкий",
        "міняти",
        "міраж",
        "місити",
        "місток",
        "міцний",
        "набити",
        "набік",
        "навіщо",
        "нагай",
        "нагорі",
        "надати",
        "надмір",
        "надпис",
        "надути",
        "наді",
        "назад",
        "наймит",
        "налити",
        "наліт",
        "намір",
        "напис",
        "напрям",
        "напій",
        "наразі",
        "нарком",
        "наруга",
        "насип",
        "наскок",
        "натовп",
        "натура",
        "нахил",
        "нацист",
        "начеб",
        "неволя",
        "негода",
        "недруг",
        "незле",
        "нелюд",
        "немає",
        "неміч",
        "неначе",
        "ненка",
        "нерв",
        "нехай",
        "нехотя",
        "нижче",
        "никати",
        "нитка",
        "нить",
        "нишком",
        "новак",
        "новела",
        "новина",
        "ножик",
        "носик",
        "носок",
        "носій",
        "нота",
        "нотка",
        "нудний",
        "нужда",
        "нуль",
        "нумо",
        "ніжно",
        "нізащо",
        "нікуди",
        "німб",
        "німець",
        "німота",
        "нічого",
        "ніяк",
        "обабіч",
        "обвал",
        "обидва",
        "обмаль",
        "обмін",
        "обняти",
        "обоз",
        "обора",
        "обоє",
        "обрис",
        "обруч",
        "обхід",
        "обшир",
        "обід",
        "обіч",
        "овал",
        "овес",
        "одежа",
        "одинак",
        "одійти",
        "ожина",
        "окань",
        "окраса",
        "окрім",
        "олія",
        "омар",
        "онде",
        "оний",
        "опора",
        "оправа",
        "опікун",
        "опір",
        "оракул",
        "орач",
        "оргазм",
        "особа",
        "осокір",
        "острів",
        "осуд",
        "осяяти",
        "осінь",
        "отак",
        "отам",
        "отвір",
        "отим",
        "отой",
        "отрок",
        "отрута",
        "офіс",
        "офіцер",
        "охайно",
        "охнути",
        "охота",
        "охочий",
        "оцей",
        "оцінка",
        "очерет",
        "очний",
        "падати",
        "падло",
        "пазуха",
        "пака",
        "палата",
        "палець",
        "палити",
        "палко",
        "пальма",
        "панель",
        "панна",
        "папаха",
        "паркет",
        "паста",
        "патли",
        "патрон",
        "патьок",
        "пафос",
        "пацан",
        "паче",
        "пашіти",
        "паща",
        "певен",
        "певне",
        "педаль",
        "пекуче",
        "пелька",
        "пенсне",
        "пень",
        "перина",
        "перон",
        "перст",
        "перший",
        "печаль",
        "печеня",
        "пилюка",
        "пиляти",
        "пиріг",
        "писар",
        "писк",
        "писок",
        "пиття",
        "пиха",
        "пищати",
        "пияк",
        "плазма",
        "плай",
        "план",
        "пласт",
        "плач",
        "плесо",
        "плече",
        "плин",
        "плугар",
        "плюс",
        "плямка",
        "плівка",
        "плід",
        "плітка",
        "побути",
        "побіля",
        "повз",
        "повний",
        "повіки",
        "погано",
        "погляд",
        "погон",
        "поезія",
        "поет",
        "пожежа",
        "пожива",
        "позад",
        "позов",
        "поки",
        "покора",
        "покров",
        "полин",
        "полк",
        "полюс",
        "поляк",
        "політ",
        "помалу",
        "помста",
        "поміж",
        "понад",
        "попадя",
        "попіл",
        "пора",
        "порив",
        "порода",
        "портал",
        "посаг",
        "посол",
        "потиск",
        "потому",
        "потуга",
        "потіха",
        "пошити",
        "пояс",
        "поїти",
        "право",
        "прадід",
        "праска",
        "присуд",
        "притча",
        "приціл",
        "пробіл",
        "провал",
        "проект",
        "пройти",
        "прокоп",
        "проміж",
        "прорив",
        "просо",
        "протяг",
        "прохід",
        "прояв",
        "пружно",
        "прямий",
        "прірва",
        "псалом",
        "птах",
        "пташка",
        "пузо",
        "пульс",
        "пункт",
        "пусто",
        "пуття",
        "путь",
        "пшоно",
        "півень",
        "півник",
        "піджак",
        "підло",
        "підряд",
        "підхід",
        "піжама",
        "пільга",
        "піна",
        "піонер",
        "після",
        "піст",
        "пітон",
        "піхва",
        "пічка",
        "рабиня",
        "равлик",
        "раджа",
        "ради",
        "радник",
        "район",
        "ракета",
        "рама",
        "рамено",
        "ранг",
        "ранець",
        "ранити",
        "ранком",
        "рано",
        "раніш",
        "раптом",
        "рать",
        "рачки",
        "ребро",
        "рева",
        "ревище",
        "ревний",
        "ревти",
        "регіт",
        "рейка",
        "рейс",
        "рекорд",
        "ректор",
        "ремінь",
        "рента",
        "рецепт",
        "речник",
        "ривок",
        "ридати",
        "ринути",
        "риса",
        "робити",
        "рогоза",
        "родити",
        "роза",
        "розбір",
        "розкіш",
        "розмір",
        "розпад",
        "розум",
        "роман",
        "ротик",
        "рубати",
        "рубець",
        "руда",
        "румун",
        "рурка",
        "русин",
        "рухати",
        "рученя",
        "ручка",
        "рушати",
        "рушій",
        "руїна",
        "рядком",
        "рядно",
        "рядок",
        "ряска",
        "ряст",
        "рівень",
        "рідко",
        "рідня",
        "різкий",
        "різник",
        "рішати",
        "рішучо",
        "сага",
        "садиба",
        "садок",
        "сакви",
        "сало",
        "салют",
        "самець",
        "самиця",
        "сапер",
        "сарана",
        "сварка",
        "сваха",
        "свинка",
        "свято",
        "свіжо",
        "світло",
        "свіча",
        "сейм",
        "секрет",
        "сектор",
        "секція",
        "селити",
        "селюк",
        "серб",
        "сердюк",
        "середа",
        "серп",
        "серія",
        "сизий",
        "синтез",
        "синяк",
        "синій",
        "сириця",
        "ситий",
        "сичати",
        "скала",
        "скарб",
        "скелет",
        "склад",
        "скніти",
        "скоба",
        "скорий",
        "скраю",
        "скриня",
        "слабий",
        "славка",
        "слати",
        "сливка",
        "слимак",
        "служба",
        "сльота",
        "сліпо",
        "смерть",
        "смик",
        "сморід",
        "смутно",
        "сміло",
        "снаряд",
        "снасть",
        "собака",
        "собі",
        "сокира",
        "сокіл",
        "солома",
        "солід",
        "соната",
        "сонний",
        "соня",
        "сопка",
        "сорт",
        "сосна",
        "сотка",
        "соус",
        "соціум",
        "союз",
        "спекти",
        "сперма",
        "спис",
        "спрут",
        "спів",
        "став",
        "старик",
        "стаття",
        "стегно",
        "стеля",
        "стен",
        "стерня",
        "стиль",
        "стисло",
        "стихія",
        "стовп",
        "стоячи",
        "страта",
        "стрий",
        "строфа",
        "струна",
        "стріла",
        "стукач",
        "стулка",
        "стусан",
        "стягти",
        "стіл",
        "стінка",
        "суворо",
        "сувій",
        "суглоб",
        "суддя",
        "судина",
        "судно",
        "судома",
        "сукно",
        "сумно",
        "сунути",
        "сутінь",
        "сухар",
        "сухо",
        "сушити",
        "сущий",
        "суєта",
        "схил",
        "схов",
        "схожий",
        "схрон",
        "схід",
        "сюжет",
        "сяючий",
        "сяяти",
        "сідати",
        "сікач",
        "сірко",
        "сірник",
        "сісти",
        "сіяти",
        "сіяч",
        "табло",
        "табу",
        "тавро",
        "така",
        "талант",
        "тандем",
        "танк",
        "танок",
        "танути",
        "тато",
        "тахта",
        "таїна",
        "таїти",
        "твань",
        "твар",
        "твердо",
        "театр",
        "теза",
        "тема",
        "темний",
        "темп",
        "темінь",
        "тепер",
        "тепло",
        "терези",
        "термос",
        "терор",
        "тертя",
        "тесати",
        "технік",
        "течія",
        "тигр",
        "тикати",
        "тисяча",
        "титар",
        "титул",
        "тихо",
        "тихцем",
        "тиша",
        "тлін",
        "товща",
        "того",
        "толока",
        "тонкий",
        "тонший",
        "тонус",
        "тополя",
        "торба",
        "трава",
        "тракт",
        "транс",
        "треба",
        "тренер",
        "тричі",
        "трон",
        "тропіки",
        "троян",
        "трудар",
        "труна",
        "трюк",
        "трішки",
        "туалет",
        "тугий",
        "тужний",
        "туніка",
        "тупати",
        "тупий",
        "турист",
        "туча",
        "тюрма",
        "тяга",
        "тягти",
        "тяжко",
        "тяжче",
        "тяжіти",
        "тяма",
        "тятива",
        "тіло",
        "тільце",
        "тітка",
        "тітчин",
        "тішити",
        "убір",
        "увесь",
        "уголос",
        "угору",
        "удар",
        "удача",
        "удвічі",
        "узвіз",
        "узяти",
        "укол",
        "украй",
        "улич",
        "уміло",
        "унизу",
        "уночі",
        "уніат",
        "унітаз",
        "унія",
        "уперше",
        "упир",
        "упокій",
        "ураз",
        "уранці",
        "урвище",
        "уряд",
        "услід",
        "усміх",
        "успіх",
        "уста",
        "усього",
        "усякий",
        "утроба",
        "уява",
        "уявити",
        "файл",
        "факт",
        "фальш",
        "фара",
        "фарба",
        "фарс",
        "фасон",
        "фата",
        "фермер",
        "флакон",
        "флот",
        "фляга",
        "фокус",
        "фонд",
        "фора",
        "фотель",
        "фото",
        "фрак",
        "франк",
        "фраза",
        "фреска",
        "футбол",
        "фікція",
        "філія",
        "фірма",
        "хабар",
        "халат",
        "халепа",
        "халупа",
        "хатка",
        "хвала",
        "хвіст",
        "хижка",
        "хитати",
        "хиткий",
        "хитро",
        "хлоп",
        "хмара",
        "хмиз",
        "ходити",
        "хоча",
        "хребет",
        "хрест",
        "хрипко",
        "хропти",
        "хруст",
        "хрущ",
        "хтось",
        "хутір",
        "хідник",
        "хімія",
        "царів",
        "цвісти",
        "цезар",
        "центр",
        "церква",
        "циклон",
        "цинізм",
        "цить",
        "цукор",
        "цупкий",
        "цівка",
        "цікаво",
        "цілий",
        "чавун",
        "чагар",
        "чадо",
        "чайка",
        "чайник",
        "чаклун",
        "чапля",
        "чарка",
        "часник",
        "часом",
        "часто",
        "чати",
        "чаша",
        "чашка",
        "чвара",
        "чекати",
        "чемно",
        "черва",
        "через",
        "черкас",
        "черінь",
        "чесати",
        "честь",
        "чийсь",
        "чимало",
        "чимраз",
        "чинний",
        "чирва",
        "число",
        "чисто",
        "читач",
        "член",
        "човник",
        "чоло",
        "чорний",
        "чорт",
        "чота",
        "чотири",
        "чувати",
        "чудно",
        "чудо",
        "чуже",
        "чужий",
        "чуйний",
        "чума",
        "чути",
        "чутка",
        "чітко",
        "шакал",
        "шалик",
        "шаман",
        "шанець",
        "шати",
        "шафа",
        "шахтар",
        "шашка",
        "швачка",
        "швед",
        "швидко",
        "шедевр",
        "шейх",
        "шеляг",
        "шерех",
        "шериф",
        "шиба",
        "шибка",
        "ширити",
        "широко",
        "ширше",
        "шитво",
        "шити",
        "шкала",
        "шквал",
        "шкода",
        "шкіпер",
        "шкірка",
        "шлик",
        "шлунок",
        "шляхта",
        "шовк",
        "шолом",
        "шофер",
        "шпарко",
        "шпигун",
        "шпиль",
        "шпичак",
        "шрифт",
        "штаб",
        "штамп",
        "штани",
        "штахет",
        "штик",
        "штраф",
        "шуба",
        "шубка",
        "шуліка",
        "шурхіт",
        "шхуна",
        "щабель",
        "щастя",
        "щезати",
        "щеня",
        "щиро",
        "щоби",
        "щодень",
        "щодня",
        "щомиті",
        "щораз",
        "щосили",
        "щічка",
        "ювелір",
        "ювілей",
        "юнга",
        "юрба",
        "юрист",
        "юрма",
        "юрта",
        "явити",
        "явище",
        "ягня",
        "ягода",
        "ягідка",
        "якір",
        "ямочка",
        "ярина",
        "ярка",
        "ярмо",
        "яруга",
        "ясла",
        "ясний",
        "ясніше",
        "ятаган",
        "яхта",
        "ячмінь",
        "ящик",
        "яєчня",
        "євро",
        "єдиний",
        "єство",
        "ідилія",
        "іззаду",
        "ікона",
        "імла",
        "індус",
        "іноді",
        "іній",
        "іржа",
        "іскра",
        "іслам",
        "істота",
        "їжак",
        "їжачок",
        "їздити",
        "їхній",
        "ґанок",
        "ґазда",
        "ґвалт",
        "ґрунт",
        "ґуля"}), 4)
    {
        populate_maps();
    }
};

} // namespace Language
