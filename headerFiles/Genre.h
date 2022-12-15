#pragma once
#include <string>
using namespace std;

class Genre {
public:
    enum GENRETYPE {
        ACTION=1, 
        ADVENTURE, 
        ANIMATION, 
        BIOGRAPHY, 
        COMEDY, 
        CRIME,
        DOCUMENTARY,
        DRAMA,
        FAMILY,
        FANTASY,
        HISTORY,
        HORROR,
        MUSICAL,
        MYSTERY,
        NEWS,
        ROMANCE,
        SCIFI,
        THRILLER,
        WAR,
        WESTERN
    };
private:
    GENRETYPE type;
    string description;
public:
    Genre(GENRETYPE t) {
        type = t;
        description = getGenreDescription(t);
    }
    GENRETYPE getGenreType() {return type;} ;
    string getGenreDescription(enum GENRETYPE g);
};

string Genre::getGenreDescription(enum GENRETYPE g) {
    switch (g) {
        case 1: //ACTION
            return "Should contain numerous scenes where action is spectacular and usually destructive. Often includes non-stop motion, high energy physical stunts, chases, battles, and destructive crises (floods, explosions, natural disasters, fires, etc.) Note: if a movie contains just one action scene (even if prolonged, i.e. airplane-accident) it does not qualify. Examples: Die Hard (1988) |The Avengers (2012) | Wonder Woman (2019)";
            break;
        case 2: //ADVENTURE
            return "Should contain numerous consecutive and inter-related scenes of characters participating in hazardous or exciting experiences for a specific goal. Often include searches or expeditions for lost continents and exotic locales, characters embarking in treasure hunt or heroic journeys, travels, and quests for the unknown. Not to be confused with Action, and should only sometimes be supplied with it. Examples: The Goonies (1985) |The Lord of The Rings: The Fellowship of the Ring (2001) | Life of Pi (2012)";
            break;
        case 3: //ANIMATION
            return "Over 75percent of the title's running time should have scenes that are wholly, or part-animated. Any form of animation is acceptable, e.g., hand-drawn, computer-generated, stop-motion, etc. Puppetry does not count as animation, unless a form of animation such as stop-motion is also applied. Incidental animated sequences should be indicated with the keywords part-animated or animated-sequence instead. Although the overwhelming majority of video games are a form of animation it's okay to forgo this genre when adding them as this is implied by the title type. Examples: Spirited Away (2001) |The Lion King (1994) | The Simpsons (1987)";
            break;
        case 4: //BIOGRAPHY
            return "Primary focus is on the depiction of activities and personality of a real person or persons, for some or all of their lifetime. Events in their life may be reenacted, or described in a documentary style. If re-enacted, they should generally follow reasonably close to the factual record, within the limitations of dramatic necessity. A real person in a fictional setting would not qualify a production for this genre. If the focus is primarily on events, rather than a person, use History instead. Examples: Judy (2019) |Unbroken (2014) | Erin Brockovich (2000)";
            break;
        case 5: //COMEDY
            return "Virtually all scenes should contain characters participating in humorous or comedic experiences. The comedy can be exclusively for the viewer, at the expense of the characters in the title, or be shared with them. Please submit qualifying keywords to better describe the humor (i.e. spoof, parody, irony, slapstick, satire, dark-comedy, comedic-scene, etc.). If the title does not conform to the 'virtually all scenes' guideline then please do not add the comedy genre; instead, submit the same keyword variations described above to signify the comedic elements of the title. The subgenre keyword 'dramedy-drama' can also be used to categorize titles with comedic undertones that qualify for the Drama genre but not necessarily the Comedy genre. Examples: Some Like it Hot (1959) |When Harry Met Sally... (1989) | Bridesmaids (2011)";
            break;
        case 6: //CRIME
            return "Whether the protagonists or antagonists are criminals this should contain numerous consecutive and inter-related scenes of characters participating, aiding, abetting, and/or planning criminal behavior or experiences usually for an illicit goal. Not to be confused with Film-Noir, and only sometimes should be supplied with it. Examples: Pulp Fiction (1994) |The Usual Suspects (1995) | Fargo (1996)";
            break;
        case 7: //DOCUMENTARY
            return "Should contain numerous consecutive scenes of real personages and not characters portrayed by actors. This does not include fake or spoof documentaries, which should instead have the fake-documentary keyword. A documentary that includes actors re-creating events should include the keyword 'reenactment' so that those actors are not treated as 'Himself'. This genre should also be applied to all instances of stand-up comedy and concert performances. Examples: American Factory (2019) |March of the Penguins (2005) | Exit Through the Gift Shop (2010)";
            break;
        case 8: //DRAMA
            return "Should contain numerous consecutive scenes of characters portrayed to effect a serious narrative throughout the title, usually involving conflicts and emotions. This can be exaggerated upon to produce melodrama. Examples: The Shawshank Redemption (1994) |What's Eating Gilbert Grape (1993) | Casablanca (1942)";
            break;
        case 9: //FAMILY
            return "Should be universally accepted viewing for a younger audience. e.g., aimed specifically for the education and/or entertainment of children or the entire family. Often features children or relates to them in the context of home and family. Note: Usually, but not always, complementary to Animation. Examples: Toy Story (1995) |The Wizard of Oz (1939) | Mary Poppins (1964)";
            break;
        case 10: //FANTASY
            return "Should contain numerous consecutive scenes of characters portrayed to effect a magical and/or mystical narrative throughout the title. Usually has elements of magic, supernatural events, mythology, folklore, or exotic fantasy worlds.Note: not to be confused with Sci-Fi which is not usually based in magic or mysticism. Examples: Game of Thrones (2011) |Harry Potter and The Sorcerer's Stone (2001) | Stranger Things (2016)";
            break;
        case 11: //HISTORY
            return "Primary focus is on real-life events of historical significance featuring real-life characters (allowing for some artistic license); in current terms, the sort of thing that might be expected to dominate the front page of a national newspaper for at least a week; for older times, the sort of thing likely to be included in any major history book. While some characters, incidents, and dialog may be fictional, these should be relatively minor points used primarily to bridge gaps in the record. Use of actual persons in an otherwise fictional setting, or of historic events as a backdrop for a fictional story, would not qualify. If the focus is primarily on one person's life and character, rather than events of historical scope, use Biography instead. Examples: Lincoln (2012) |Hidden Figures (2016) | The King's Speech (2010)";
            break;
        case 12: //HORROR
            return "Should contain numerous consecutive scenes of characters effecting a terrifying and/or repugnant narrative throughout the title. Note: not to be confused with Thriller which is not usually based in fear or abhorrence. Examples: The Shining (1980) |Halloween (1978) | A Quiet Place (2018)";
            break;
        case 13: //MUSICAL
            return "Should contain several scenes of characters bursting into song aimed at the viewer (this excludes songs performed for the enjoyment of other characters that may be viewing) while the rest of the time, usually but not exclusively, portraying a narrative that alludes to another Genre. Note: not to be added for titles that are simply music related or have music performances in them; e.g., pop concerts do not apply. Also, classical opera, since it is entirely musical, does not apply and should instead be treated as Music. Examples: The Sound of Music (1965) |La La Land (2016) | The Greatest Showman (2017)";
            break;
        case 14: //MYSTERY
            return "Should contain numerous inter-related scenes of one or more characters endeavoring to widen their knowledge of anything pertaining to themselves or others. Note: Usually, but not always associated with Crime. Examples: The Girl on the Train (2016) |Gone Girl (2014) | Winter's Bone (2010)";
            break;
        case 15: //NEWS
            return "Reports and discussion of current events of public importance or interest. This generally includes newsreels, newsmagazines, daily news reports, and commentary/discussion programs that focus on news events. If the events are not current (at the time the title was initially released), use History instead. News titles are normally made for television, podcasts, or (in the case of newsreels) short films. Feature films, direct-to-video titles, and videogames would not normally be included in the News genre. Examples: Dateline NBC (1992) |Vice (2013) | Last Week Tonight with John Oliver (2014)";
            break;
        case 16: //ROMANCE
            return "Should contain numerous inter-related scenes of a character and their personal life with emphasis on emotional attachment or involvement with other characters, especially those characterized by a high level of purity and devotion. Note: Reminder, as with all genres if this does not describe the movie wholly, but only certain scenes or a subplot, then it should be submitted as a keyword instead. Examples: The Notebook (2004) |Bridget Jones's Diary (2001) | Shakespeare In Love (1998)";
            break;
        case 17: //SCIFI
            return "Numerous scenes, and/or the entire background for the setting of the narrative, should be based on speculative scientific discoveries or developments, environmental changes, space travel, or life on other planets. Examples: Star Wars (1977) |The Matrix (1999) | Alien (1979)";
            break;
        case 18: //THRILLER
            return "Should contain numerous sensational scenes or a narrative that is sensational or suspenseful. Note: not to be confused with Mystery or Horror, and should only sometimes be accompanied by one (or both). Examples: Black Swan (2010) |The Silence of the Lambs (1991) | Se7en (1995)";
            break;
        case 19: //WAR
            return "Should contain numerous scenes and/or a narrative that pertains to a real war (i.e., past or current). Note: for titles that portray fictional war, please submit it as a keyword only. Examples: 1917 (2019) |Saving Private Ryan (1998) | Platoon (1986)";
            break;
        case 20: //WESTERN
            return "Should contain numerous scenes and/or a narrative where the portrayal is similar to that of frontier life in the American West during 1600s to contemporary times. Examples: Unforgiven (1992) |The Good, the Bad, and the Ugly (1966) | The Revenant (2015)";
            break;
        default:
            return "";
            break;
    }
}